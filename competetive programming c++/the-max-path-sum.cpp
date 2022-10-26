#include<bits/stdc++.h>
using namespace std;
#define int long long
const int INF  = LLONG_MAX >> 1;
signed main(){
    int n,m;
    cin >> n >> m;
    vector<vector<int>> v(n,vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        /* code */
        for (int j = 0; j < m; j++)
        {
            /* code */
            cin >> v[i][j];
        }
        
    }
    function<int(int,int)> f = [&](int i,int j){
        if(i == n-1 && j == m-1){
            return v[i][j];
        }
        if(i>=n|| j>= m){
            return -INF;
        }
        return max(f(i+1,j),f(i,j+1))+v[i][j];
    };
    cout << f(0,0)<< endl;
    

}