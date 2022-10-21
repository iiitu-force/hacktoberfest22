#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        long long n ,x1;
        cin >> n >> x1;
        if(n%2 == 0){
            long long x = n/2;
            if(x%2 == 0){
                cout << n-x1<< endl;
            }
            else{
                cout << n+x1<< endl;
            }
        }
        else{
            long long x = n/2;
            if(x%2 == 0){
                cout << n+x1<< endl;
            }
            else{
                cout << n-x1<< endl;
            }
        }
    }
    
}