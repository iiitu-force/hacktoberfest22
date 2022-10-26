class Solution {
public:
    string sortSentence(string s) {
        map<char,string> mp;
         string temp;
        int k =0;
        for(int i =0;i< s.size();i++){
           
            if(s[i]!= ' ' && s[i] > 57){
                temp+=s[i];
            }
            else{
                if(s[i] == ' '){
                    //string c =  s[i-1] + '0';
                   // int  x = stoi(c);
                    //mp[s[i-1]] = temp;
                    mp.insert({ s[i-1], temp });
                    temp = "";
                    k++;
                    
                }
                else if(i == s.size() - 1){
                    mp.insert({ s[i], temp });
                    temp = "";
                    k++;
                
                }
                else{
                    continue;
                }
                    
                 
            }
            
        }
        
        string z;
        
        int hh = 1;
        for (auto i : mp){
            z+=i.second;
           if(hh != k){
               z+=' ';
           }
            hh++;
                
            
            
            
            
        }
       
        
        
        return z;
    }
};

As at max 9 words are allowed, we use a string vector of size 10 to store word positions.
Then we simply traverse our input string word by word and keep adding it in the pos array as per it's given position digit.
Lastly, we travese our pos array and append the strings with spaces to the final answer.
The answer must not end with a space so we delete the last space before returning.
string sortSentence(string s) {
        vector<string>pos(10,"");
        for(int i=0; i<s.size(); i++){
            int j = i;
            string temp;
            while(!isdigit(s[j])){
                temp.push_back(s[j]);
                j++;
            }
            pos[s[j]-'0'] = temp;
            i = j+1;
        }
        string ans;
        for(int i=1; i<10; i++){
            if(pos[i].length()>0){
                ans+=pos[i];
                ans.push_back(' ');
            }
        }
        ans.pop_back();
        return ans;
    }
};