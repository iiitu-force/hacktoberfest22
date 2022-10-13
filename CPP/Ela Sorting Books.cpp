#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, b = 0;
        cin >> n >> k;
        string s, ans = "";
        cin >> s;
        map<char , int> m;
        vector<int> v(25 , 0);
        for(int i = 0; i < n; i++)
        {
            v[s[i] - 'a']++;
            // m[s[i]]++;
        }
        for(int i = 0; i < k; i++)
        {
            bool flag = true;
            int j;
            for(j = 0, b = 0; j < 25; j++, b++)
            {
                if(v[j] == 0)
                {
                    char c = 'a' + j;
                    ans += c;
                    flag = false;
                    break;
                }
                v[j]--;
                if(b == n / k)
                {
                    break;
                }
            }
            if(flag)
            {
                ans += 'a' + j;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
