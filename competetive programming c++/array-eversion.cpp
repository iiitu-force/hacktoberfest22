#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        vector<int> v(n);
        cin >> n;
        for (int i = n-1; i >= 0; i--)
        {
            /* code */
            cin >> v[i];
        }
        int x= v[n-1];
        int cnt=0;
        for (int i = n-2; i >= 0; i--)
        {
            /* code */
            // cin >> v[i];
            if(v[i]>x){
                cnt++;
                x=v[i];
            }
        }
        cout << x << endl;

        
    }
    
}