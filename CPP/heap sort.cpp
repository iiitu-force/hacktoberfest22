#include <iostream>
using namespace std;



void deleteheap(int arr[], int size)
{
    // size = size - 1;
    int temp;
    temp  = arr[0];
    int lastnode = arr[size];
    arr[0] = lastnode;
    arr[size] = temp;

    int leftchild, rightchild;

    int i = 0;
    while (i < size)
    {

        leftchild = 2 * i + 1;
        rightchild = 2 * i + 2;

        if (leftchild < size && rightchild < size)
        {
            if (arr[i] < arr[leftchild] && arr[i] > arr[rightchild])
            {
                swap(arr[i], arr[leftchild]);
                i = leftchild;
            }
            else if (arr[i] > arr[leftchild] && arr[i] < arr[rightchild])
            {
                swap(arr[i], arr[rightchild]);
                i = rightchild;
            }
            else if (arr[i] < arr[leftchild] && arr[i] < arr[rightchild])
            {
                if (arr[leftchild] > arr[rightchild])
                {
                    swap(arr[i], arr[leftchild]);
                    i = leftchild;
                }
                else
                {
                    swap(arr[i], arr[rightchild]);
                    i = rightchild;
                }
            }
            else
            {

                break;
            }
        }
        else
        {

            break;
        }
    }
}

int main()
{

    int arr[] = {90,89,70,36,75,63,65,21,18,15};

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Displaying orignal heap: " << endl;
    for(int i=0;i<size; i++){
        cout<<arr[i]<<" ";
    }
    // display(arr, size);
    cout<<endl;
    // cout<<size<<endl;

    // cout << "After deleting root node: " << endl;
    for (int i = size-1; i > 0; i--)
    {
        deleteheap(arr, i);
    }

    cout<<"Checking heap sort: "<<endl;
    // display(arr, size);
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
