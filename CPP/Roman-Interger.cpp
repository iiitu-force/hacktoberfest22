#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int num = 0, i = 0;
        for (i = 0; i < s.length() - 1; i++)
        {
            if (s[i] == 'I')
            {
                if (s[i + 1] == 'V')
                    num += 4, i++;
                else if (s[i + 1] == 'X')
                    num += 9, i++;
                else
                    num += mp[s[i]];
            }
            else if (s[i] == 'X')
            {
                if (s[i + 1] == 'L')
                    num += 40, i++;
                else if (s[i + 1] == 'C')
                    num += 90, i++;
                else
                    num += mp[s[i]];
            }
            else if (s[i] == 'C')
            {
                if (s[i + 1] == 'D')
                    num += 400, i++;
                else if (s[i + 1] == 'M')
                    num += 900, i++;
                else
                    num += mp[s[i]];
            }
            else
                num += mp[s[i]];
        }
        if (i < s.length())
            num += mp[s[i]];
        return num;
    }
};