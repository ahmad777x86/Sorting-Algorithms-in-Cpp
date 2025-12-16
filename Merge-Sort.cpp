#include <iostream>
#include <vector>

using namespace std;

void Merge(int array[], int left, int mid, int right)
{
    int k = left;
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L1(n1);
    vector<int> L2(n2);

    for (int i = 0; i < n1; i++)
        L1[i] = array[left + i];
    for (int i = 0; i < n2; i++)
        L2[i] = array[mid + 1 + i];

    int i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (L1[i] < L2[j])
        {
            array[k] = L1[i];
            i++;
        }
        else
        {
            array[k] = L2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        array[k] = L1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        array[k] = L2[j];
        j++;
        k++;
    }
}

void MergeSort(int array[], int left, int right)
{
    if (left >= right)
        return;
    cout << "Left: " << left << "Right: " << right << endl;

    int mid = left + (right - left) / 2;
    MergeSort(array, left, mid);
    MergeSort(array, mid + 1, right);

    Merge(array, left, mid, right);
}

int main()
{
    const int size = 20;
    int array[size] = {4, 32, 5, 6, 1, 0, 55, 43, 5, 7, 6, 53, 12, 24, 34, 11, 17, 14, 25, 38};

    MergeSort(array, 0, 19);

    cout << "Array:";
    for (int i = 0; i < size; i++)
        cout << " " << array[i];
    return 0;
}