#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int x;
        cin >> x;
        vector<int> v(x);
        for (int i = 0; i < x; i++)
        {
            /* code */
           int y;
           cin >> y;
           v.push_back(y);
        }
        long long ans = 0;
        // traverse from back makes the question easy
        for (int i = x - 2; i >= 0; i--)
        {
            /* code */
           
                  if ( v[i + 1] == 0)
                {
                    ans =-1;
                    break;
                }
                while (v[i] >= v[i + 1] )
                {
                    /* code */
                    ans++;
                    v[i] /= 2;
                }
                // humko inc chaye so koi bhi  do equal  na ho and divide by 2 till > 0
              
            
        }
        cout << ans << endl;
    }
}