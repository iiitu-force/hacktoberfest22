class Solution {
public:
    int findGCD(vector<int>& nums) {
        int l = nums.size();
        sort(nums.begin(),nums.end());
        int max1 = 1;
        for(int i =2 ;i<=nums[0];i++){
            if(nums[0]%i == 0 && nums[l-1]%i == 0){
                max1 = i;
            }
        }
        return max1;
        
    }
};
int findGCD(vector<int>& n) {
    return __gcd(*min_element(begin(n), end(n)), *max_element(begin(n), end(n)));
}