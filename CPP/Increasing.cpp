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
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin() , v.end());
        bool flag = true;
        for(int i = 1; i < n; i++)
        {
            if(v[i] == v[i - 1])
            {
                flag = false;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}
