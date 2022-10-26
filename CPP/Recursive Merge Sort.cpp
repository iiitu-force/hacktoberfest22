#include <iostream>
using namespace std;


void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int low, int mid, int high)
{

    int i, j, k;
    i = low;
    j = mid+1;
    k = low;

    int temp[high + 1];

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            k++;
            i++;
        }
        else
        {
            temp[k] = arr[j];
            k++;
            j++;
        }
    }

    while (i <= mid)
    {
        temp[k] = arr[i];
        k++;
        i++;
    }

    while (j <= high)
    {
        temp[k] = arr[j];
        k++;
        j++;
    }

    //coping temp array elements to orignal array
    for(int x = low; x<=high; x++){
        arr[x] = temp[x];
    }
}

void mergesort(int arr[], int low, int high)
{

    int mid;

    if (low < high)
    {
        mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

int main()
{
    int arr[] = {2, 5, 8, 12, 3, 6, 7, 10};
    int size;
    size = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Orignal array: ";
    display(arr, size);

    mergesort(arr, 0, size-1);

    cout << "Sorted Array: ";
    display(arr, size);

    return 0;
}
