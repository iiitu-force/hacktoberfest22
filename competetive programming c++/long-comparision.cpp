#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        // agar 1 se badh hoga toh positive and 1 se less toh neg and = equal and after that powers ko add -subract 
        int x1,p1,x2,p2;
        cin >> x1 >> p1 >> x2 >> p2;
       double y;
       y = log10(1.0*x1/x2)+p1-p2;
       if(y == 0){
        cout << "="<< endl;
       }
       else if(y>0){
        cout << ">"<< endl;
       }
       else{
        cout << "<"<< endl;
       }

    }
    
}
//
