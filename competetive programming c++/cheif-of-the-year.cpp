#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n>> m;
    map<string,string> mp;
    map<string,int> mp1;
    map<string,int> mp2;
    for (int i = 0; i < n; i++)
    {
        string x,y;
        cin >> x >> y;
        mp[x] = y;
        



    }
    for(int i=0;i<m;i++){
        string x;
        cin >> x;
        mp1[x]++;
        mp2[mp[x]]++;
    }
    string ans,ans2;
    int maxi=0;
    for(auto it : mp1) {
        if(it.second>maxi) {
            maxi = it.second;
            ans = it.first;
        }
    }
    maxi=0;
    for(auto it : mp2) {
        if(it.second>maxi) {
            maxi = it.second;
            ans2 = it.first;
        }
    }
    
     cout << ans2 << endl << ans << endl;
    
}