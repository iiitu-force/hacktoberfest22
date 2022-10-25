#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, k;
        cin >> n >> m >> k;
        unordered_map<int, unordered_map<int, int>> mat;
        vector<pair<int, int>> v;
        for (int i = 0; i < k; i++)
        {

            int x, y;
            cin >> x >> y;
            mat[x][y] = 1;
            v.push_back({x, y});
        }

        long long ans = 0;

        for (auto x : v)
        {

            long long i = x.first;
            long long j = x.second;

            // left
            if (j > 0)
            {

                if (mat[i][j - 1] == 0)
                {
                    ans++;
                }
            }
            else
            {

                ans++; // edge
            }

            // right
            if (j < m)
            {

                if (mat[i][j + 1] == 0)
                {
                    ans++;
                }
            }
            else
            {

                ans++; // edge
            }

            // up
            if (i > 0)
            {

                if (mat[i - 1][j] == 0)
                {
                    ans++;
                }
            }
            else
            {

                ans++; // edge
            }

            // down
            if (i < n)
            {

                if (mat[i + 1][j] == 0)
                {
                    ans++;
                }
            }
            else
            {

                ans++; // edge
            }
        }

        cout << ans << endl;
    }
}
//
void solve()
{
    int n, m, k; cin >> n >> m >> k;
    set<pair<int, int>> s;
    for (int i = 0; i < k; i++)
    {
        int x, y; cin >> x >> y;
        s.insert({x,y});
    }
    long long fence = 0;
    for(auto p:s)
    {
        //no plant to left
        if(s.find({p.first - 1, p.second}) == s.end()) fence++;
        //no plant to up
        if(s.find({p.first, p.second - 1}) == s.end()) fence++;
        //no plant to right
        if(s.find({p.first + 1, p.second}) == s.end()) fence++;
        //no plant to down
        if(s.find({p.first, p.second - 1}) == s.end()) fence++;
    }
    cout << fence << endl;
}