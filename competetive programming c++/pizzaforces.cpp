#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << (max(6LL,n+1)/2 )*5<< endl;
    }
}
//
#include<bits/stdc++.h>
#define ll unsigned long long
#define arr(a,n)  for(int i=0;i<(n);i++) cin>>a[i];
#define for(i,n) for(int i=0;i<n;i++)
void init()
{
	#ifndef ONLINE_JUDGE
 
freopen("input.txt", "r", stdin);
 
freopen("output.txt", "w", stdout);
 
#endif // ONLINE_JUDGE
 
}

using namespace std;
int main(){
    init();
    ios::sync_with_stdio(false); cin.tie(0);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n<=6){
            cout<<15<<endl;
        }
        else{
            ll rem=n%6;
            if(rem==0){
                cout<<(n/6)*15<<endl;
            }
            else if(rem==1||rem==2){
                cout<<((n/6))*15+5<<endl;
            }
            else if(rem==3||rem==4){
                cout<<(n/6)*15+10<<endl;
            }
            else{
                cout<<((n/6)+1)*15<<endl;
            }
        }
    }
    return 0;
}