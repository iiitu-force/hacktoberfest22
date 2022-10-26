class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        for(int i =0;i< arr.size()-1;i++){
            int x = arr[i];
            int y =  arr[i+1];
            int inde = i+1;
            for(int j = i+1;j<arr.size();j++){
                if(arr[j]>y){
                    y = arr[j];
                    inde = j;
                }
            }
           // swap(arr[i],arr[inde]);
            arr[i] = arr[inde];
        }
        arr[(arr.size() - 1)] = -1;
         vector<int> temp;
    temp = arr;
    return temp;
    }
   
};


// nice soln picha se traverse kranga 
 vector<int> replaceElements(vector<int>& arr) {
        int m=-1;
        for(int i=arr.size()-1;i>=0;i--) {
            int cur=arr[i];
            arr[i]=m;
            m=max(m, cur);
        }
        return arr;
    }


    // It's interesting how running forward causes O(N^2) runtime and backward O(N). Nice solution!