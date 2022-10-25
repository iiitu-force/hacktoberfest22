#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       
        int n;
        cin >> n;

        string s;
        cin >> s;

        map<char, char> converse;
        converse['B'] = 'R';
        converse['R'] = 'B';

        string ans = "";

        char first = 'z';
        for (int i = 0; i < n; i++)
        {
            while (i < n && s[i] == '?')
                i++;

            if (i == n)
                break;

            if ((i - ans.size()) % 2)
            {
                char cons = s[i];
                for (int j = ans.size(); j <= i; j++)
                {
                    ans += converse[cons];
                    cons = converse[cons];
                }
            }

            else
            {
                char cons = converse[s[i]];
                for (int j = ans.size(); j <= i; j++)
                {
                    ans += converse[cons];
                    cons = converse[cons];
                }
            }
        }

        if (ans.size() == 0)
        {
            char m = 'B';
            for (int i = 0; i < n; i++)
            {
                ans += m;
                m = converse[m];
            }
        }

        while (ans.size() < n)
        {
            int last = ans.size();
            ans += converse[ans[last - 1]];
        }

        cout << ans << "\n";
    }
}