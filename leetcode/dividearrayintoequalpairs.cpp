class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int arr[501] ={0};
        for(int i =0;i<nums.size();i++){
            arr[nums[i]]++;
        }
        int cnt=0;
        for(int i =0;i<501;i++){
            if(arr[i]%2 == 0 && arr[i] != 0){
                cnt+=(arr[i]/2);
            }
        }
        if(cnt ==  ((nums.size())/2)){
            return 1;
        }
        else{
            return 0;
        }
    }
};
Time Complexity - O(Nlog(N))
Space Complexity - O(1)
Code:

class Solution {
public:
    bool divideArray(vector<int>& nums) 
    {
        int n =nums.size();
        sort(nums.begin(), nums.end());
        int i=1;
        while(i<n)
        {
            if(nums[i-1] != nums[i])
                return false;
            i = i+2;
        }
        return true;
        
    }
};
Approach-2 :
Time Complexity - O(N)
Space Complexity - O(N)

class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;    
        }
        
        //count total pairs
        int totalPairs = 0;
        for(auto it: mpp){
            totalPairs += it.second/2;
        }
        
        return (totalPairs == n/2);
    }
};