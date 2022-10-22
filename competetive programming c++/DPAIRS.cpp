#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v1(n), v2(m);
    for (int i = 0; i < n; i++)
        cin >> v1[i];
    for (int i = 0; i < m; i++)
        cin >> v2[i];
    set<int> s;
    vector<pair<int, int>> v3;
    int k = n + m - 1;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            int sum = v1[i] + v2[j];
            if (s.count(sum) == 0)
            {
                s.insert(sum);
                v3.push_back({i, j});
            }
            else
            {
                continue;
            }
            if (s.size() > k)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            /* code */
            break;
        }
    }
    for (auto it : v3)
    {
        cout << it.first << " " << it.second << endl;
    }
}