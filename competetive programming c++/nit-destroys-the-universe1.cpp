#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int x;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            /* code */
            cin >> arr[i];
        }
        int cnt =0;
        int ans =0;
        for (int i = 0; i < x; i++)
        {
            /* code */
            if(arr[i]!= 0){
                cnt++;
            }
            else{
                if(cnt > 0){
                    ans++;
                }
                cnt =0;
            }
        }
        if(cnt > 0){
            ans++;
        }
        cout<< min(2,ans) << endl;
        

        

    }
    
}