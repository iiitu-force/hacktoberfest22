// vector<int> twoSum(vector<int>& numbers, int target)
//     {
// 	unordered_map<int, int> hash; //Number, Index
        
// 	for (int i = 0; i < numbers.size(); i++) 
//         {
// 		int numberToFind = target - numbers[i];

// 		if (hash.find(numberToFind) != hash.end()) 
// 			return  {hash[numberToFind] ,i };

// 		hash[numbers[i]] = i;
// 	}
// 	return {};
//     }
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>jj;
        int flag =0;
        for(int i =0;i<nums.size();i++){
            int ans = target-nums[i];
            for(int j = 0;j<nums.size();j++){
                if(nums[j] == ans && j != i){
                    jj.push_back(i);
                    jj.push_back(j);
                    flag =1;
                   break;
                }
            }
            if(flag == 1){
                break;
            }
        }
        return jj;
    }
};