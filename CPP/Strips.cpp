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
        vector<string> v;
        char recent = 'B';
        for(int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        for(int i = 0; i < 8; i++)
        {
            if(v[i] == "RRRRRRRR")
            {
                recent = 'R';
                break;
            }
        }
        cout << recent << endl;
    }
    return 0;
}
