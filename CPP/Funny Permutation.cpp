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
        if(n == 2)
        {
            cout << "2 1" << endl;
            continue;
        }
        if(n == 3)
        {
            cout << -1 << endl;
        }
        else
        {
            if(n & 1)
            {
                for(int i = (n + 1) / 2; i <= n; i++)
                {
                    cout << i << " ";
                }
                for(int i = 1; i < (n + 1) / 2; i++)
                {
                    cout << i << " ";
                }
            }
            else
            {
                for(int i = n / 2 + 1; i <= n; i++)
                {
                    cout << i << " ";
                }
                for(int i = 1; i <= n / 2; i++)
                {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}
