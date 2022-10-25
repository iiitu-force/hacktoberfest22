class Solution {
public:
    int maximum69Number (int num) 
    {
        string s = to_string(num);
        int n = s.length();
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '6')
            {
                s[i] = '9';
                break;
            }
        }    
        int ans = stoi(s);
        return ans;
    }
};
