#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        map<int,int> mp;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int x;
            cin >> x;
            mp[x]++;
        }
        int max1 =0;
        int max2 =0;
        for(auto it: mp){
            if(it.second > max1){
                max1 =it.second;
                max2 =it.first;
            }
        }
        int ans =0;
        int cnt=max1;
        while (cnt < n )
        {
            /* code */
            ans++; // for every iteration of this loop means we  make a clone . we will add cn to the ans
            if(2*cnt < n){
                ans+=cnt;
                cnt =cnt*2;
            }
            else{
                ans+=(cnt-n);
                cnt =n;
            }
        }
        cout << ans << endl;

        
    }
    
}