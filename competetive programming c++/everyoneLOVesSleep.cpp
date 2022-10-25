#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n,h,m;
        cin >> n >> h >> m;
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            /* code */
            int hx,mx;
            cin >> hx >> mx;
            if(hx -h > 0){
                
                int y = 60*(hx-h)+mx-m;
                s.insert(y);
            }
            else if(hx == h){
                if (mx>=m)
                {
                    /* code */
                    s.insert(mx-m);
                }
                else{
                    int y  = 24*60 +60*(hx-h)+mx-m;
                s.insert(y);
                }
                
            }
            else{
                int y  = 24*60 +60*(hx-h)+mx-m;
                s.insert(y);
            }
        }
        for(auto i : s){
            cout << i/60 << " " << i%60 << endl;
            break;
        }
        
    }
    
}