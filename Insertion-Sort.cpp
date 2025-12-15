#include <iostream>

using namespace std;

void InsertionSort(int array[], const int size)
{
    int key, j;

    for (int i = 1; i < size; i++)
    {
        key = array[i];
        j = i - 1;
        while (array[j] > key && j >= 0)
        {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int main()
{
    const int size = 20;
    int array[size] = {4, 32, 5, 6, 1, 0, 55, 43, 5, 7, 6, 53, 12, 24, 34, 11, 17, 14, 25, 38};

    InsertionSort(array, size);

    cout << "Array:";
    for (int i = 0; i < size; i++)
        cout << " " << array[i];
    return 0;
}