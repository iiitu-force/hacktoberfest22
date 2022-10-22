#include<bits/stdc++.h>
using namespace std;


bool gcd1(int a,int b){
    return (__gcd(a,b) == 1);
}
void printre(int n){
    for (int i = n/2; i >= 1; i--)
    {
        /* code */
        if(gcd1(i,n-i) == 1){
            cout << i << " "<< n-i<< " "<< 1 << endl;
            return;
        }
    }
    
    
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        int n;
        cin >> n;
        printre(n-1);

    }
    
}