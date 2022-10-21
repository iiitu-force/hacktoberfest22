#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v;
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i=0;i<m;i++){
        int x,y;
        cin >>x >> y;
        vp.push_back({x,y});
    }
    vector<long long> pf(n),pf2(n);
    pf[0] =0;
    pf2[0]=0;
    for (int i = 1; i < n; i++)
    {
        /* code */
        if(v[i]-v[i-1] < 0){

        
        pf[i] = pf[i-1] + v[i]-v[i-1];}
        else{
             pf[i] = pf[i-1];
        }
    }
    for(int i=1;i<n;i++){
        if(v[i]-v[i-1]<=0){
             pf2[i] = pf2[i-1];
        }
        else{
             pf2[i] = pf2[i-1] + v[i]-v[i-1];
        }
    }
    for (int i = 0; i < m; i++)
    {
        /* code */
        if(vp[i].first <= vp[i].second){

        
        cout << pf[vp[i].first -1] - pf[vp[i].second -1] << endl;}
        else{
            cout << pf2[vp[i].first -1] - pf2[vp[i].second -1] << endl;
        }
    }
    
    
}