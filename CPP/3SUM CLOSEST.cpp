class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    
       sort(nums.begin(), nums.end() ); 
        
     
        int ans = INT_MAX;
        int sum = 0;
        for(int k = 0; k < nums.size() - 2; k++)
        {
            int i =k+1;
               int j = nums.size()-1;
            while(i < j)
            {
                int sol = nums[i] + nums[j] + nums[k];
                
                  if(sol > target)
                {
                    j--;
                }
                if(sol < target)
                {
                    i++;
                }
                if(sol == target)
                {
                    return target;
                }
                if(abs(sol - target) < ans)
                {
                    ans = abs(sol - target);
                    sum = sol;

                }
            
            }
        }
        return sum;

    }
};
