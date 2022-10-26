#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n--)
    {
        /* code */
        long long a,b,c,d;
        cin >> a >> b >> c >> d;
        int ans;
         long long x = c*b;
        long long  y = a*d;
         if (x == y)
        cout << "0\n";
    else if (y != 0 && x % y == 0 || x != 0 && y % x == 0)
        cout << "1\n";
    else
        cout << "2\n";
        
    }
    
}
