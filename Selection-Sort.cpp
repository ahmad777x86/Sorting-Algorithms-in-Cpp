#include <iostream>

using namespace std;

int Minimum(int array[], const int size, int start, int &min_index)
{
    int min = INT_MAX;
    for (int i = start; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            min_index = i;
        }
    }
    return min;
}

void SelectionSort(int array[], const int size)
{
    int min_index;
    int min, temp;
    for (int i = 0; i < size; i++)
    {
        min = Minimum(array, size, i, min_index);

        temp = array[i];
        array[i] = array[min_index];
        array[min_index] = temp;
    }
}

int main()
{
    const int size = 20;
    int array[size] = {4, 32, 5, 6, 1, 0, 55, 43, 5, 7, 6, 53, 12, 24, 34, 11, 17, 14, 25, 38};

    SelectionSort(array, size);

    cout << "Array:";
    for (int i = 0; i < size; i++)
        cout << " " << array[i];
}