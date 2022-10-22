class Solution {
public:
    int minStartValue(vector<int>& nums) {
       
      
        for(int i=1;;i++){
            int flag =1;
             int sum=i;
            for(int j=0;j<nums.size();j++){
                sum = sum + nums[j];
                if(sum < 1){
                    flag =0;
                    break;
                }
            }
            if(flag == 1){
                return i;
            }
        }
    }
};
https://leetcode.com/problems/minimum-value-to-get-positive-step-by-step-sum/discuss/1570965/C%2B%2BPython-Clean-and-Simple-Solution-w-Explanation-or-Tracking-min-Running-Sum
class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minsum =0, currsum=0;
        for(int i=0;i<nums.size();i++){
            currsum = currsum+nums[i];
            minsum = min(minsum,currsum);
        }
        return -minsum+1;
        
    }
};