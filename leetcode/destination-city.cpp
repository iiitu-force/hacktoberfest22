class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int>mp;
        for(int i =0;i< paths.size();i++){
            mp[paths[i][0]]++;
            mp[paths[i][1]]++;
        }
        string s;
        if(paths.size() == 1){
            s = paths[0][1];
            
        }
        else{
            for(int i =0;i< paths.size();i++){
            if(mp[paths[i][0]] == 2 && mp[paths[i][1]]== 1){
                s = paths[i][1];
                break;
            }
            
        }
        }
         
       
        
        
        return s;
    }
};


//First Method

string destCity(vector<vector<string>>& paths) 
    {
        int m = paths.size();
        
        unordered_map<string, int> mp;
        for(int i = 0; i < m; i++)
           mp[paths[i][0]]++;
        
        for(int i = 0; i < m; i++)
        {
            if(mp[paths[i][1]] < 1)
                return paths[i][1];
        }
        
        return "";   
    
    }
	
	
//Second Method

string destCity(vector<vector<string>>& paths) 
{
		unordered_set<string> st;
		for(int i = 0; i < paths.size(); i++)
			st.insert(paths[i][0]);

		for(int i = 0; i < paths.size(); i++)
		{
			if(st.find(paths[i][1]) == st.end())
				return paths[i][1];
		}
    
             return "";
 }		