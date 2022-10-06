#include<iostream>
#define SIZE 5

using namespace std;

class searching
{
public:
    int arr[SIZE];

    void get()
    {
        cout << "Enter Element in Array: " << endl;

        for(int i = 0; i<SIZE ; i++)
        {
            cin >> arr[i];
        }
    }

    void linear_search()
    {
        int ele;

        cout << "Enter element you want to search: ";
        cin >> ele;

        for(int i=0; i<=SIZE; i++)
        {
            if(ele == arr[i])
            {
                cout << "Element found at position " << i+1 << endl;
                break;
            }
            if(i == SIZE)
            {
                cout << "Element not found" << endl;
            }
        }

    }

    int binary_search()
    {
        int ele;
        int low = 0,high;

        cout << "Enter element you want to search: ";
        cin >> ele;

        high = SIZE-1;

        while(low <= high)
        {
            int mid = (high+low)/2;

            if(arr[mid] < ele)
            {
                low = mid + 1;
            }
            else if(arr[mid] > ele)
            {
                high = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        return 0;
    }
};

int main()
{
    searching s;
    int ch,r;

    do
    {
        cout << "1. Linear Search" << "  2. Binary Search" << "  3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                cout << "\n";
                s.get();
                s.linear_search();
                break;

            case 2:
                cout << "\n";
                s.get();
                r = s.binary_search();
                if(r != 0)
                {
                    cout << "element found at position " << r+1 << endl;
                }
                else
                {
                    cout << "Element not found" << endl;
                }
                break;
            case 3:
                cout << "Exit" << endl;
                break;
            default:
			{
				cout << "Invalid choice.";
				break;
			}
        }
        cout << "\n";
    }while(ch != 3);
}
