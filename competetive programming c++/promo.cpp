#include<bits/stdc++.h>
using namespace std;
// # define int long long
int main(){
    int n,q;
    cin >> n >> q;
    vector<long long> v(n),vp(n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> v[i];
    }
    sort(v.rbegin(),v.rend());
    vp[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        /* code */
        vp[i] = vp[i-1]+v[i];

       
    }
    for(int i=0;i<q;i++){
        int x,y;
        cin >> x >> y;
       if(x ==y){
         cout << vp[x-1]<< endl;
       }
       else{

       // earlier i was doing little mistake i was doing y-1 which was not right 
        long long diff = abs(x-y);
        cout << vp[x-1]-vp[diff-1]<< endl;}
    }


    
}