#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        vector<int> rs;
        for (int i = 0; i < x; i++)
        {
            /* code */
            int y;
            cin >> y;
            rs.push_back(y);
        }
        int ans = 0;
        for (int i = 0; i < x - 1; i++)
        {
            /* code */
            for (int j = i + 1; j < x; j++)
            {
                /* code */
                if (rs[j] - rs[i] == j - i)
                    ans++;
            }
        }
        cout << ans  << endl;
    }
}