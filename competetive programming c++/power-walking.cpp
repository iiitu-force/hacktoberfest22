#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        set<long long> s;
        int x;
        cin >> x;
        vector<long long> v(x);
        for (int i = 0; i < x; i++)
        {
            /* code */ int u;
            cin >> u;
            v[i] = u;
            s.insert(u);
        }

        int cnt = s.size();
        for (int i = 1; i <= x; i++)
        {
            /* code */
            // if(s.size()>=i){
            //     cout << s.size()<< " ";
            // }
            // else{
            //       cout << i<< " ";
            // }
            cout << max(cnt, i) << " ";
        }
        cout << endl;
    }
}
