#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        long long a,b,c;
        // long long arr[3];
        cin >> a >> b >> c;
       int flag =0;
        long long newa = 2*b-c;
        long long newb= (a+c)/2;
         long long newc = 2*b-a;

        if(newa >= a && newa%a == 0 && newa != 0){
            cout << "YES"<< endl;
            flag =1;
        }
         
        else if(newb >= b && newb%b == 0 && (a+c)%2 == 0 && newb != 0){
            cout << "YES"<< endl;
            flag =1;
        }
        
      else  if(newc >= c && newc%c == 0 && newc != 0){
            cout << "YES"<< endl;
            flag =1;
        }
      else  if(flag == 0){
            cout << "NO"<< endl;
        }


        
    }
    
}