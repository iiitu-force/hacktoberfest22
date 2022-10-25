 bool sortByVal(const pair<int, int> &a, 
               const pair<int, int> &b) 
{ 
    return (a.second < b.second); 
}
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        map<int,int> map1;
        for(int i =0;i<nums.size();i++){
            map1[i] = nums[i];
        }
        vector<pair<int, int>> vec;

	// copy key-value pairs from the map to the vector
  map<int, int> :: iterator it2;
  for (it2=map1.begin(); it2!=map1.end(); it2++) 
  {
    vec.push_back(make_pair(it2->first, it2->second));
  }

	// // sort the vector by increasing order of its pair's second value
  sort(vec.begin(), vec.end(), sortByVal); 
        int len = vec.size();
    int ans = (vec[len-1].second - 1)*(vec[len-2].second - 1);
        return ans;

       
    }
};
//  read the disscussion
// Time : O(N)
// Space : O(1)
// Iterate array
// 1.) if cur val is more than max1, put curr val in max1 and max1 val in max2
// 2.) else if curr val is more than max2, put curr val in max2

// class Solution {
//     public int maxProduct(int[] nums) {
//         int max1 = 0;
//         int max2 = 0;
//         for(int i:nums){
//             if(i>max1){
//                 max2 = max1;
//                 max1 = i;
//             }
//             else if(i>max2){
//                 max2 = i;
//             }
//         }
//         return (max1-1)*(max2-1);
//     }
// }