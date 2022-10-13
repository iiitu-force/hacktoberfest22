#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string countAndSay(int n)
    {
        string ans = "1";
        if (n == 1)
            return ans;
        n--;
        while (n--)
        {
            string temp = "";
            for (int i = 0; i < ans.length(); i++)
            {
                int c = 1;
                while (i + 1 < ans.length() and ans[i] == ans[i + 1])
                    c++, i++;
                temp += to_string(c);
                temp += ans[i];
            }
            ans = temp;
        }
        return ans;
    }
};