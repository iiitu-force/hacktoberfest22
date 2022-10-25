class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum =0;
        int rsum =0;
        int n = nums.size();
        int left[n];
        int right[n];
        for(int i=0;i<n;i++)
        {
            lsum+= nums[i];
            left[i] = lsum;
        }
        for(int i = n-1;i>=0;i--)
        {
            rsum += nums[i];
            right[i] = rsum;
        }
        for(int i=0;i<n;i++)
        {
            if(left[i]==right[i])
                return i;
        }
        return -1;
    }
};
