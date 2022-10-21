#include<bits/stdc++.h>
using namespace std;

long long printre (long long t, long long k=0LL){
  if(t == 0){
    return k-1;
  }
    k++;
    t = t/2;
    return printre(t,k);
}
int main(){
    long long t;
    cin >> t;
    long long x;
   x =  printre(t);
   cout << x;
}