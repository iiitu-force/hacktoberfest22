#include<bits/stdc++.h>
#define int long long
using namespace std;
signed main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    int t = accumulate(arr,arr+n,0LL);
    function<int(int,int)> func = [&](int s,int i){
        if(i == n){
            return abs((t-s)-s);
        }
        return min(func(s,i+1),func(s+arr[i],i+1));
    };
    cout << func(0LL,0LL)<< endl;
    
}