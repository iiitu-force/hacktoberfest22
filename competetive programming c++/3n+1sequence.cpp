#include<bits/stdc++.h>
using namespace std;
int printre(int t, int k=1){
    if(t == 1){
        return k;
    }
    if(t%2 == 0){
        k++;
        t = t/2;
        return printre(t,k);
    }
    else{
        k++;
        int temp = t;
        t = 3*temp +1;
          return printre(t,k);

    }
}
int main(){
    int t;
    cin >> t;
    int x = printre(t);
    cout << x;
}