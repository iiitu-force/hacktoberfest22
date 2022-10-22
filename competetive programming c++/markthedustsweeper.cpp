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
        vector<int> v;
        long long ans=0;
        int flag =0;
        for (int i = 0; i <n; i++)
        {
            /* code */
            long long x;
            cin >> x;
            if(x!=0 ){
                flag =1;
            }
            if(flag ==1 && i< n-1 && x!=0){
                ans+=x;
            }
             if(flag ==1 && i< n-1 && x==0){
                ans+=1;
            }
        
            
        }
        cout << ans << endl;
        
    }
    
}