#include<bits/stdc++.h>
using namespace std;

void display(int arr[], int size){
        for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}


void bubblesort(int arr[], int n){
    int flag=0;

    for(int i=0;i<n-1;i++){
        for(int j=0; j<n-1-i;j++){

            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                flag=1;
            }
        }
        if(flag==0){
            break;
        }
    }
  
}

int main(){
    
    int arr[] = {1,25,14,12,28,98,54,71,5};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Array before heap sort: ";

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    cout<<"Array after Bubble sort: ";
    bubblesort(arr, size);
    display(arr, size);
 

    return 0;
}
