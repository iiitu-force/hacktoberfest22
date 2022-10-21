class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
            
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
//
Let's take example with negative and positive numbers, like:

[-4, -2, 0, 1, 3]
Since we need to put squeres in result array, we can consider that all numbers are positive (since: -4**2 = 4**2 = 16). Now our array looks like it sorted from middle to outside on both sides:

[4, 2, 0, 1, 3]
Now, we can have two pointers l to left most element, r to most right element.
Create res result array same size as A.
Move from right to left in res and past max(abs(A[l]), abs(A[r])), move correspondingly l++ or r--.

image
//https://leetcode.com/problems/squares-of-a-sorted-array/discuss/495394/C%2B%2B%3A-Simplest-one-pass-two-pointers
https://leetcode.com/problems/squares-of-a-sorted-array/discuss/973576/A-good-interview-problem-interview-explanation-C%2B%2B

Same works for example with all negative and all positive numbers.

class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res(A.size());
        int l = 0, r = A.size() - 1;
        for (int k = A.size() - 1; k >= 0; k--) {
            if (abs(A[r]) > abs(A[l])) res[k] = A[r] * A[r--];
            else res[k] = A[l] * A[l++];
        }
        return res;
    }
};