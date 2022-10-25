#include<bits/stdc++.h>
using namespace std;

void printre (long long n){
    if(n== 1){
        cout << 1;
        return;
    }
    if(n%2 == 0 ){
        cout << n << " ";
        n = n/2;
        printre(n);
    }
    else{
        cout << n << " ";
        n = 3*n + 1;
        printre(n);
    }
}
int main(){
    long long  n;
    cin >> n;
    printre(n);

}