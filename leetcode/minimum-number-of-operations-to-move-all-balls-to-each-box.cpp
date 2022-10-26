class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> arr;
        int l = boxes.size();
        
        for(int i=0;i<l;i++){
            int initial_index = i;
            int temp=0;
            for(int j=0;j<initial_index;j++){
                if(boxes[j] == '1'){
                    temp+=initial_index-j;
                }
            }
            for(int j= initial_index;j<l;j++){
                if(boxes[j] == '1'){
                    temp+=j-initial_index;
                }
            }
            arr.push_back(temp);
            
        }
        return arr;
    }
};
//
https://leetcode.com/problems/minimum-number-of-operations-to-move-all-balls-to-each-box/
class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> pre(n);
        pre[0]  =  0;
        int count =  0;
        for (int i = 1; i<n ;i++){
            
            if (boxes[i-1] == '1') {
                count++;
                pre[i] = pre[i-1] +  count;
            }
            else{
                pre[i] = pre[i-1] +  count;
            }
            
        }
        
        vector <int > suff(n);
        suff[n-1] =0 ;
        count = 0;
        for ( int i = n- 2 ; i >= 0 ; i-- ){
            
            if (boxes[i+ 1] ==  '1'){
                count++;
                suff[i] = suff[i+1] +  count;
            }
            else{
                suff[i] = suff[i+1] +  count;   
            }
            
        }
        
        vector<int>  ans(n);
        for (int i = 0;  i< n ; i++){
            ans[i] = pre[i]  +  suff[i];
        }
        
        return ans;
    }
};