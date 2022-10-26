#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int c;
            cin >> c;
            v.push_back(c);
        }
        int neg = 0;
        int prev, curr;
        if (n > 1)
        {
            if (v[1] - v[0] < 0)
            {
                prev = -1;
            }
            else if (v[1] - v[0] == 0)
            {
                prev = 0;
            }
            else
            {
                prev = +1;
            }
            int cng = 0;

            for (int i = 1; i < n - 1; i++)
            {
                /* code */
                if (v[i + 1] - v[i] < 0)
                {
                    curr = -1;
                }
                else if (v[i + 1] - v[i] == 0)
                {
                    curr = 0;
                }
                else
                {
                    curr = +1;
                }
                if(curr  == 0 && prev == 0){
                    cng++;
                }
              else  if (curr != prev)
                {
                    cng++;
                }
                prev = curr;
            }
            if (cng <= 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}