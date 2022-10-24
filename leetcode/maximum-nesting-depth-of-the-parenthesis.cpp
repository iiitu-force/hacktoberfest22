class Solution {
public:
    int maxDepth(string s) {
        int l=0,r=0;
            vector<int> ans;
        int flag =0;
        for(int i =0;i<s.size();i++){
            if(s[i] == '('){
                l++;
            }
            if(s[i]==')'){
                r++;
            }
            
            if(s[i] != '(' &&  s[i] != ')'){
                ans.push_back(l-r);
                int flag =1;
            }
            if(s[i] == '(' &&s[i+1] ==')' && i!=0){
                
                ans.push_back(l-r);
            }
            if(s == "()"){
                ans.push_back(1);
            }
            
        }
        ans.push_back(l-r);
        sort(ans.begin(),ans.end());
        int l1=ans.size();
        return ans[l1-1];
    }
};

Exlanation
Ignore digits and signs,
only count the current open parentheses cur.

The depth equals to the maximum open parentheses.


Complexity
Time O(N)
Space O(1)

int maxDepth(string s) {
        int res = 0, cur = 0;
        for (char& c: s) {
            if (c == '(')
                res = max(res, ++cur);
            if (c == ')')
                cur--;
        }
        return res;
    }