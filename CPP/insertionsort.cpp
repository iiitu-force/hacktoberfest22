#include<iostream>
using namespace std; 

void display(int arr[], int n){
    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insertionsort(int arr[], int n){

    int temp;

    for(int i=1;i<n;i++){
        temp =arr[i];
        for(int j=i-1;j>=0;j--){
            if(j==0 && (temp<arr[j])){
                arr[j+1]=arr[j];
                arr[j] = temp;
            }
            else if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                arr[j+1] = temp;
                break;
            }
        }
    }
}



int main(){

    // int arr[] = {8,5,7,3,2};
    // int arr[] = {11,15,1,101,19,27,4,254,0,75,48,95,22};
    int arr[] = {2, 8, 1, 3, 6, 7, 5, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<"Printing without sorted array: ";
    display(arr, size);

    cout<<"Performing insertion sort: ";
    insertionsort(arr, size);
    // display(arr, size);
        for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
