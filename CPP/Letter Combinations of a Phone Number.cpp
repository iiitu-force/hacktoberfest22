class Solution {
    
    void solve(string digits, vector<string>& ans, string output, int index, string map[] ){
        
        if(index >= digits.length()){
            ans.push_back(output);
            return;
        }
        
        
        int number = digits[index]-'0';
        string val = map[number];
        
        for(int i=0; i< val.length(); i++){
            output.push_back(val[i]);
            solve(digits, ans, output, index+1, map);
            output.pop_back();
        }
    }
    
public:
    vector<string> letterCombinations(string digits) {
        
        vector<string> ans;
        
        if(digits.length()==0){
            return ans;
        }
        
        string output = "";
        
        int index=0;
        
        string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno","pqrs", "tuv", "wxyz"};
        
        solve(digits, ans, output, index, map);
        
        return ans;
    }
};
