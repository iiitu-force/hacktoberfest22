class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt =0;
        for(int i =0;i<nums.size();i++){
            int l =floor(log10(nums[i]) + 1);
            if(l%2 == 0)
                cnt++;
            
                
        }
        return cnt;
    }
};
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n,count=0;
        for(int i=0;i<nums.size();i++)
        {
            n=nums[i];
            if(( 10<=n && n<=99) || (1000<=n && n<=9999 ) || ( n==100000 ))
            {
               count++;
            }
        }
        return count;
    }
};