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
        auto max1 = max_element(v.begin(), v.end()) - v.begin();
        int flag = 0;
        if (n > 1)
        {
            if (max1 != n - 1)
            {
                for (int i = max1; i < n-1; i++)
                {
                    /* code */
                    if (v[i] - v[i + 1] < 0)
                    {
                        flag = 1;
                        break;
                    }
                }
            }

            for (int i = 0; i <= max1-1; i++)
            {
                /* code */
                if (v[i + 1] - v[i] < 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}