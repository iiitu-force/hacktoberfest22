#include<bits/stdc++.h>
using namespace std;
int arr[1005];
        int b[1005];
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */ 

        // logic is to assign minnimum and if arr[i] == i+1 swap krdo
        int x;
        cin >> x;
        
        for (int i = 0; i < x; i++)
        {
            /* code */
            cin >> arr[i];
            b[i]=i+1;
        }
        int arr1[x];
        for (int i = 0; i < x-1; i++)
        {
            /* code */
           
            if(arr[i] == b[i]){
             swap(b[i],b[i+1]);
            }

        }
        if(arr[x-1] == b[x-1]){
            swap(b[x-2],b[x-1]);
        }
        if(x == 1){
            cout << -1 << endl;
        }
        else{

        
         for (int i = 0; i < x; i++)
        {
            /* code */
           
           cout << b[i]  << " ";

        }
        cout << endl;}

    }
    
}