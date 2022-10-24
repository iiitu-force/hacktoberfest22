class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> val;
        for(int i=0;i<nums.size();i++){
            val.insert(nums[i]);
        }
        while(val.find(original) != val.end()){
            original = original * 2;
        }
        return original;
    }
};

// new soln 
Logic: Hash the given array and keep finding until o*2 isn't present.

Complexity: Time: O(n)
Space: O(1001) i.e O(constant)

Using Array:

int findFinalValue(vector<int>& nums, int o) {
        int h[1001]={};
        for(auto i:nums) h[i]++;
		
        while(o<=1000 && h[o])
            o*=2;
        
        return o;
    }
    This snippet is from Guide to Competitive Programming

Sorting has little advantage over set.
Array has little advantage over map.
This advantage grows as size of input grows.
cp imp img on desktop;