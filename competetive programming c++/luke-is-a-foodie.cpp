#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n, x; cin >> n >> x;
 
    vector<int> v(n);
    int ans = 0;
    int mn = -1e9-10, mx = 1e9+10;
    for (auto &i:v) cin >> i;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int a = v[i]-x;
        int b= v[i]+x;
        mn = max(a,mn);
        mx = min(b,mx);
        if(mn>mx){
            ans++;
            mn = a;
            mx= b;
        }

    }
    cout << ans << endl;
    
        
    }
    
}