#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, k, r, c;
        cin >> n >> k >> r >> c;
        vector<vector<char>> v(n+1);
        if (n >= 2)
        {
            for (int i = 1; i <= n; i++)
            {
                /* code */
                vector<char> temp(n+1,'.');
                int cnt =n/k;
                for (int j = 1,l=1; j <= n; j++)
                {
                    /* code */
                    if(cnt  ){
                      temp[l] = 'X';
                      l = l+k;
                      cnt--;
                    }
                    
                }
                v[i] =temp;
            }
            if(v[r][c] != 'X'){
                v[r][c] = 'X';
                for (int i = 1,l=1; i <= n; )
                {
                    /* code */
                    int u;
                    if(i==1){
                      u =k;
                    }
                   
                    int y = 1+u;
                    if(c > i && c < y){
                        v[r][i] ='.';
                        break;
                    }
                    i =y;
                    u =u*2;
                }
                
                

            }
            for (int i = 1; i <= n; i++)
            {
                /* code */

                for (int j = 1; j <= n; j++)
                {
                    /* code */
                    cout << v[i][j];
                }
                cout << endl;
            }
        }
    }
}
// (r + c) % k  == (i + j) % k