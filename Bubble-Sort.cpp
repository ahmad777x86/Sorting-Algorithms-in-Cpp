#include <iostream>

using namespace std;

void Swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}

void BubbleSort(int array[], const int size)
{
    bool swapped;

    for (int i = 0; i < size; i++)
    {
        swapped = false;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {
                Swap(array[j], array[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}

int main()
{
    const int size = 20;
    int array[size] = {4, 32, 5, 6, 1, 0, 55, 43, 5, 7, 6, 53, 12, 24, 34, 11, 17, 14, 25, 38};

    BubbleSort(array, size);

    cout << "Array:";
    for (int i = 0; i < size; i++)
        cout << " " << array[i];
}