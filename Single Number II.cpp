class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_set<long long> s(nums.begin(), nums.end());
        long long set_sum = 0, vec_sum = 0;
        for(auto &i : s) set_sum += i;
        set_sum *= 3;
        for(auto &o : nums) vec_sum += o;

        return ((set_sum - vec_sum) / 2); 
    }
};
