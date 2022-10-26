#include<bits/stdc++.h>
using namespace std;
void printre(int t){
    if(t<=0){
        return ;
    }
    if(t != 1){
        cout << t << " ";
    }
    else{
        cout << t;
    }
    
    t--;
    printre(t);
}
int main(){
    int t;
    cin >> t;
    printre(t);
}