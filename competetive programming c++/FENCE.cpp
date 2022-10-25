#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        map<int, map<int, int>> mat;

        for(int i = 0; i<k; i++) {

                int x, y; cin >> x >> y;
                mat[x][y] = 1;
        }
        int fenc = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 1)
                {
                    if (i == 0)
                    {
                        if (j == 0)
                        {
                            fenc += 2;
                            if ( m > j && mat[i][j + 1] == 0  )
                            {
                                /* code */
                                fenc++;
                            }
                            if ( n > i && mat[i + 1][j] == 0 ) 
                            {
                                fenc++;
                            }
                        }
                        else if (j > 0 && j < m - 1)
                        {
                            fenc++;
                            if ( m> j && mat[i][j - 1] == 0)
                            {
                                fenc++;
                            }
                            if (m > j &&mat[i][j + 1] == 0 )
                            {
                                fenc++;
                            }
                            if (  n > i && mat[i + 1][j] == 0 )
                            {
                                fenc++;
                            }
                        }
                        else
                        {
                            fenc += 2;
                            if (m > j && mat[i][j - 1] == 0 )
                            {
                                /* code */
                                fenc++;
                            }
                            if (  n > i && mat[i + 1][j] == 0)
                            {
                                fenc++;
                            }
                        }
                    }
                    else if (i > 0 && i < n - 1)
                    {
                        if (j == 0)
                        {
                            fenc += 1;
                            if (m > j &&mat[i][j + 1] == 0 )
                            {
                                /* code */
                                fenc++;
                            }
                            if (  n > i && mat[i + 1][j] == 0 )
                            {
                                fenc++;
                            }
                            if    ( n > i && mat[i - 1][j] == 0 )
                            {
                                fenc++;
                            }
                        }
                        else if (j > 0 && j < m - 1)
                        {
                            // fenc++;
                            if ( m> j && mat[i][j - 1] == 0)
                            {
                                fenc++;
                            }
                            if  (m > j && mat[i][j + 1] == 0 )
                            {
                                fenc++;
                            }
                            if ( n > i && mat[i + 1][j] == 0 )
                            {
                                fenc++;
                            }
                            if ( n > i && mat[i - 1][j] == 0 )
                            {
                                fenc++;
                            }
                        }
                        else
                        {
                            fenc += 1;
                            if ( m > j && mat[i][j - 1] == 0 )
                            {
                                /* code */
                                fenc++;
                            }
                            if ( n > i && mat[i + 1][j] == 0 )
                            {
                                fenc++;
                            }
                            if ( n > i && mat[i - 1][j] == 0 )
                            {
                                fenc++;
                            }
                        }
                    }
                    else
                    {
                        if (j == 0)
                        {
                            fenc += 2;
                            if ( m > j && mat[i][j + 1] == 0)
                            {
                                /* code */
                                fenc++;
                            }
                            if ( n > i && mat[i - 1][j] == 0 )
                            {
                                fenc++;
                            }
                        }
                        else if (j > 0 && j < m - 1)
                        {
                            fenc++;
                            if ( m>j && mat[i][j - 1] == 0)
                            {
                                fenc++;
                            }
                            if ( m > j && mat[i][j + 1] == 0 )
                            {
                                fenc++;
                            }
                            if ( n > i && mat[i - 1][j] == 0)
                            {
                                fenc++;
                            }
                        }
                        else
                        {
                            fenc += 2;
                            if ( m > j && mat[i][j - 1] == 0 )
                            {
                                /* code */
                                fenc++;
                            }
                            if ( n > i && mat[i - 1][j] == 0 )
                            {
                                fenc++;
                            }
                        }
                    }
                }
            }
        }
        cout << fenc << endl;
    }
}
