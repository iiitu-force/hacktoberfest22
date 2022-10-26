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
        long long total =0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int y;
            cin >> y;

            total+=y;

        }
        int extra = total%n;
        int zeromorecars = n-extra;
        int extracars = extra;
        cout << zeromorecars*1ll*extracars<< endl;
        
    }
    
}