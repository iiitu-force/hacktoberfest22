class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i =0;i<nums.size();i++){
            if(nums[i] == target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
// by binary search
class Solution {
public:
    vector <int> ans;   //to store answers
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());     //sorting arrays initially
        int start=0, end=nums.size()-1;
        binary(nums, start, end, target);   //calling binary search on whole array 
        return ans;
    }
    
    void binary(vector <int> nums, int start, int end, int target){
        if(start>end)       //if array can't be divided into subarrays anymore
            return;
        
        int mid = start + (end-start)/2;        //declaring mid element
        if(nums[mid] == target){                //when target is found, push it into ans and call binary on each halved subarrays
            binary(nums, start, mid-1, target);
            ans.push_back(mid);
            binary(nums, mid+1, end, target);      
        }
        else if(nums[mid]>target)               //calling binary on lower half of array
            binary(nums, start, mid-1, target);
        else                                    //calling binary on upper half of array
            binary(nums, mid+1, end, target);
    }
    
};