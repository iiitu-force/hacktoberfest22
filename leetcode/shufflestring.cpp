class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
         multimap<int, char> mapObject;
        for(int i =0;i<indices.size();i++){
             mapObject.insert(pair<int, char>( indices[i],s[i]));
            
            
            
        }
        string v;
        for (auto& it : mapObject) {
        
            v+=it.second;
    }
        return v;
        
    }
};
