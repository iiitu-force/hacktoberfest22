#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a,k,m,n;
        cin >> a >>k >>m >>n;
        // map<int,string>mp;
        // mp[a] ="Hussien";
        // mp[k]="Atef";
        // mp[m]="Karemo";
        // mp[n]="Ezzat";
        // auto it = mp.end();
        // auto it1 = --it;
        // auto it2 = --it1;
        // cout << it1->second<< " "<< it2->second<< endl;
        vector<pair<int,string>> v;
        v.push_back({a,"Hussien"});
        v.push_back({k,"Atef"});
        v.push_back({m,"Karemo"});
        v.push_back({n,"Ezzat"});
        sort(v.begin(),v.end());
        cout << v[3].second << " "<<v[2].second<< endl;
    }
    
}