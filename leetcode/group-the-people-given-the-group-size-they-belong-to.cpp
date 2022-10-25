class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int,int> mp;
        for(int i=0;i<groupSizes.size();i++){
            mp[i] = groupSizes[i];
        }
        vector<vector<int>> vc;
        for(auto it: mp){
            vector<int> temp;
            int cnt =0;
            int var1 = it.second;
            for(auto iy: mp){
                if(cnt == it.second){
                    break;
                }
                if(iy.second  == var1 && iy.second != -1){
                    temp.push_back(iy.first);
                    cnt++;
                    mp[iy.first] = -1;
                }
                
            }
            if(temp.size() != 0)
            vc.push_back(temp);
        }
        return vc;
    }
};
//
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
    vector<vector<int>> v(groupSizes.size()+1);
    vector<vector<int>> ans;
     for(int i=0;i<groupSizes.size();i++){
         if(v[groupSizes[i]].size()==groupSizes[i]){    // If the current group is full then include that into the final answer and clear space for new group to be made ahead.
             ans.push_back(v[groupSizes[i]]);
            v[groupSizes[i]].clear();
         }
         v[groupSizes[i]].push_back(i);
     }  
  for(auto x:v){
      if(x.size()!=0)ans.push_back(x);  
  }
    
    return ans;
    
    }
};
//  very nice soln
vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans{};
        unordered_map<int, vector<int>> dict{}; // K: group size, V: indices
        for (int i=0; i<groupSizes.size(); i++) {
            int key = groupSizes[i];
            if (dict.count(key) > 0) { // check existing groups to fill
                dict[key].push_back(i);
            } else { // create a new group
                dict[key] = vector<int>{i};
            }
            if (dict[key].size() == key) { // group is full
                ans.push_back(dict[key]);
                dict.erase(key);
            }
        }
        return ans;
    }
    // in this ek for loop se hi kaam ho zyga and agar koi key nhi hoga toh new bna denga 