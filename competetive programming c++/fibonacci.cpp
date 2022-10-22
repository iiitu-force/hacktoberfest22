#include<iostream>
using namespace std;
int printre(int n){
    if(n == 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }

    if(n>=3){
        return printre(n-1)+printre(n-2);
    }
    
}
int main(){
    int n;
    cin >> n;
    int k = printre(n);
    cout << k;
}