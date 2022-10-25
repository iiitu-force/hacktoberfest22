#include<bits/stdc++.h>
using namespace std;

void printre(int x,int y=1){
    if(y > x)
    return;
   cout << y << endl;
   y++;
    printre(x,y);
    
    
}
int main(){
    int t;
    cin >> t;
    printre(t);
}