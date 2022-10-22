#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> v1(n);
    for (int i = 0; i < n; i++){
        cin >> v1[i].first;
        v1[i].second = i;
        
    }
     vector<pair<int,int>> v2(m);
    for (int i = 0; i < m; i++){
        cin >> v2[i].first;
        v2[i].second = i;
    }
     sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i=0;i<m;i++){
        cout << v1[0].second << " "<< v2[i].second<< endl;
    }
     for(int i=1;i<n;i++){
        cout << v1[i].second << " "<< v2[m-1].second<< endl;
    }
}