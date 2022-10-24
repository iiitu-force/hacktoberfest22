class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt = 0;
        for(int i =0;i<words.size();i++){
            int l = words[i].size();
            int flag = 0;
            for(int j = 0;j<l;j++){
                if(words[i][j] != s[j]){
                    flag =1;
                }
            }
            if(flag ==0 ){
                cnt++;
            }
        }
        return cnt;
    }
};
// ssare words are sub string so agr first letter are same toh prefix hai
class Solution {
public:
    int countPrefixes(vector<string>& words, string s) 
    {
        int counter = 0;
        
        for(int i=0;i<words.size();i++)
        {
            if(words[i] == s.substr(0,words[i].size()))  
                counter++;
        }

        return counter;
    }
};