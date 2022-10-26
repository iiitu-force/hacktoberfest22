class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l = nums.size()/2;
        if(nums[l] == nums[l+1]){
            return nums[l];
        }
        else{
            return nums[l-1];
        }
    }
}; int repeatedNTimes2(vector<int>& A) {
        unordered_set<int> seen;
        for (int a: A) {
            if (seen.count(a))
                return a;
            seen.insert(a);
        }
    }
    Intuition and Algorithm

Let's count the number of elements. We can use a HashMap or an array - here, we use a HashMap.

After, the element with a count larger than 1 must be the answer.