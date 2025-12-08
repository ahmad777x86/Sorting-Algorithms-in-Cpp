#include <iostream>

using namespace std;

void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

int Find_Min_Index(int array[], const int size, int start)
{
    int min_index;
    int min = INT_MAX;
    for (int i = start; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
            min_index = i;
        }
    }
    return min_index;
}

void SelectionSort(int array[], const int size)
{
    int min_index;
    for (int i = 0; i < size; i++)
    {
        min_index = Find_Min_Index(array, size, i);
        Swap(array[i], array[min_index]);
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