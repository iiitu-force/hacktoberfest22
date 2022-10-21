#include<bits/stdc++.h>
using namespace std;

void printre(int t){
    if(t== 0){
        return;
    }
    if(t%2 == 0){
   
    t = t/2;
    printre(t);
     cout << 0 ;
     }
     else{
        
    t = t/2;
    printre(t);
    cout << 1 ;
     }
}
int main(){
    int x;
    cin >> x;
    while (x--)
    {
        /* code */
        int t;
        cin >> t;
        printre(t);
        
        cout << endl;
    }
    
}