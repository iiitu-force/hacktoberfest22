#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        if (num1 == "0" || num2 == "0")
            return "0";
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        string ans(num1.length() + num2.length(), '0');
        for (int i = 0; i < num2.length(); i++)
        {
            int digit1 = num2[i] - '0';
            for (int j = 0; j < num1.length(); j++)
            {
                int digit2 = num1[j] - '0';
                int pos = i + j;
                int carry = ans[pos] - '0';
                int value = digit1 * digit2 + carry;
                ans[pos] = value % 10 + '0';
                ans[pos + 1] += value / 10;
            }
        }
        if (ans.back() == '0')
            ans.pop_back();
        reverse(ans.begin(), ans.end());
        return ans;
    }
};