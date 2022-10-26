#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
       int x;
       cin >> x;
       vector<int> v,vp;
       int foc =0;
       int loc =0;
       for (int i = 0; i < x; i++)
       {
        /* code */
        int x;
        cin >> x;
        vp.push_back(x);
        if(x !=0 && foc == 0){
            x =i;
            foc  =1;
        }
       else  if(foc == 1 && x!=0){
        loc = max(loc,i);
       }
       if(x == 0){
        v.push_back(i);
       }
       }
         if(v.size() == 1){
        cout << 1 << endl;
       }
     else  if(v.size() == x){
        cout << 0 << endl;
       }
       else if(v.size() == 1){
        cout << 1 << endl;
       }
       else{
        int flag =0;
        for (int i = foc; i <=loc; i++)
        {
            /* code */
            if(vp[i] == 0){
                flag =1;
                break;
            }
        }
        if(flag  == 0){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
        
       }

       
    }
}