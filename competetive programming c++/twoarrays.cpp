#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        vector<int> v1,v2;
        cin >>  n;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int x;
            cin >> x;
            v1.push_back(x);
        }
        for (int i = 0; i < n; i++)
        {
            /* code */
            int x;
            cin >> x;
            v2.push_back(x);
        }
        sort(v1.begin(),v1.end());
         sort(v2.begin(),v2.end());
         int cnt=0;
         for (int i = 0; i < n; i++)
         {
            /* code */
            if(v2[i]-v1[i] >1 || v2[i]-v1[i] <0){
                cnt =1;
                break;
            }
         }
         if(cnt == 1){
            cout << "NO"<< endl;
         }
         else{
            cout << "YES"<< endl;
         }
         
        
    }
    
}