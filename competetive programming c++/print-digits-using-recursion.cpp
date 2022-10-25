#include<bits/stdc++.h>
using namespace std;
void printre(int t){
    if(t<=0)
    return;
    int m = t%10;
   
    t = t/10;
    printre(t);
     cout << m << " ";
}
int main(){
    int x;
    cin >> x;
    while (x--)
    {
        /* code */
        int t;
    cin  >> t;
    if(t == 0){
        cout << 0 ;
    }
    else{
 printre(t);
    }
   
    cout << endl;
    }
    
    
}