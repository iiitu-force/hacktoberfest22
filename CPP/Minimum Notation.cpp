#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        char mn = '9';
        string s;
        cin >> s;
        int n = s.length();
        for(int i = n - 1; ~i; i--)
        {
            if(s[i] > mn)
            {
                s[i] = min('9' + 0 , s[i] + 1);
            }
            else
            {
                mn = s[i];
            }
        }
        sort(s.begin() , s.end());
        cout << s << endl;
    }
    return 0;
}
