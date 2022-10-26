#include <bits/stdc++.h>
using namespace std;
int n, h, m;
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
    if (a.first >= h && b.first >= h)
    {
        if (a.first - h == b.first - h)
        {
            /* code */
            if(a.second >= m && b.second >= m){
                return a.second -m < b.second-m;
            }
           else if (a.second < m && b.second >= m)
            {
                return a.second - m > b.second - m;
            }
            else if (a.second >= m && b.second < m)
            {
                // return b.first - h > a.first - h;
                                return a.second - m < b.second - m;
            }
            else
            {
                return abs(a.second - m) > abs(b.second - m);
            }
        }
        return a.first - h < b.first - h;
    }
    else
    {
        if (a.first < h && b.first >= h)
        {
            return a.first - h > b.first - h;
        }
        else if (a.first >= h && b.first < h)
        {
            return b.first - h > a.first - h;
        }
        else
        {
            return abs(a.first - h) > abs(b.first - h);
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        vector<pair<int, int>> v;

        cin >> n >> h >> m;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int p1, p2;
            cin >> p1 >> p2;
            v.push_back({p1, p2});
        }

        sort(v.begin(), v.end(),sortbysec);
        for(auto i: v){
            cout << i.first << " "<< i.second << endl;
        }
        if (v[0].first < h)
        {
            int hr = 23 - h + v[0].first;
            int min = 59 - m + v[0].second + 1;
            cout << hr << " " << min << endl;
        }
        else
        {
            int hr = v[0].first - h;
            int min = 59 - m + v[0].second + 1;
            if (m == 0 && v[0].second == 0)
            {
                min = 0;
            }
            else
            {
                min = 59 - m + v[0].second + 1;
            }

            if (min > 0)
                hr--;
            cout << hr << " " << min << endl;
        }
    }
}