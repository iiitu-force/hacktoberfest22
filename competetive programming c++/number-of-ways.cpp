#include<bits/stdc++.h>
using namespace std;
int k=0;
void printre(int n,int m){
    if(n == m){
        k++;
        return;
    }
    if(n > m){
        return ;
    }
    printre(n+1,m);
    printre(n+2,m);
    printre(n+3,m);
}
int main(){
    int n,m;
    cin >> n >> m;
    printre(n,m);
    cout << k;
}