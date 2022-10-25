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
        int cnto=0,cnte=0;
        int mineven=INT_MAX;
         int secmineven=INT_MAX;
         int maxeven=INT_MAX;
         vector<int>v;
        for (int i = 0; i <n; i++)
        {
            /* code */
            int y;
            cin >> y;
            v.push_back(y);
            if(y%2==0){
                cnte++;
                if (y<maxeven)
                {
                    /* code */
                    secmineven =maxeven;
                    maxeven =y;
                }
                
            }
            else{
                cnto++;
                if(y<mineven){
                    mineven =y;
                }
            }
        }
        sort(v.begin(),v.end());
        int i = v[0]&v[1] ;
        if(cnto == n){
            cout << i<< endl;
        }
        else if(cnte==n){
              cout << maxeven<< endl;
        }
        else{
            cout << 0<< endl;
        }
    }
    
}