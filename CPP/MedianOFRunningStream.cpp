#include<iostream>
#include<queue>
using namespace std;

priority_queue<int,vector<int> > maxHeap;
priority_queue<int,vector<int>,greater<int> > minHeap;

void insert(int val){
    if(maxHeap.size()==minHeap.size()){
        if(maxHeap.size()==0){
            maxHeap.push(val);
            return;
        }
        if(val<maxHeap.top()){
            maxHeap.push(val);
        }
        else{
            minHeap.push(val);
        }
    }
    else{
        if(maxHeap.size()>minHeap.size()){
            if(val<maxHeap.top()){
                int temp=maxHeap.top();
                maxHeap.pop();
                minHeap.push(temp);
                maxHeap.push(val);
            }
            else{
                minHeap.push(val);
            }
        }
        else{
            if(val>minHeap.top()){
                int temp=minHeap.top();
                minHeap.pop();
                maxHeap.push(temp);
                minHeap.push(val);
            }
            else{
                maxHeap.push(val);
            }
        }
    }
}

double median(int val){

    insert(val);
    if(maxHeap.size()==minHeap.size()){
        return (maxHeap.top()+minHeap.top())/2.0;
    }
    else if(minHeap.size()>maxHeap.size()){
        return minHeap.top();
    }
    else{
        return maxHeap.top();
    }
}
int main(){
    int arr[]={10,15,21,30,18,19};
    for(int i=0;i<6;i++){
        cout<<median(arr[i])<<" ";
    }
    return 0;
}