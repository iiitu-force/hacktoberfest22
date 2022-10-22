#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool isPrime(unsigned long long n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i <=n-1; i++)
        if (n % i == 0)
            return false;

    return true;
}
int main()
{
    // int n;
    // cin >> n;
    // vector<unsigned long long> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     int cnt = 0;
    //     for (int j = 1; j <= sqrt(v[i]); j++)
    //     {
    //         if (v[i] % j == 0)
    //         {
    //             // If divisors are equal,
    //             // count only one
    //             if (v[i]/ j == j)
    //                 cnt++;

    //             else // Otherwise count both
    //                 cnt = cnt + 2;
    //         }
    //     }
    //     if (cnt == 3)
    //     {
    //         cout << "YES" << endl;
    //     }
    //     else
    //     {
    //         cout << "NO" << endl;
    //     }
    // } by this approacch i  got tle
    int n;
    cin >> n;
    vector<unsigned long long> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        
        
    }
    for (int i = 0; i < n; i++)
    {
        
        if (v[i] == (sqrt(v[i] ) * (sqrt(v[i] ))))
        {
            int x = isPrime(sqrt(v[i]));
            if (x == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
//
Sieve of Eratosthenes
const int s = 1e7; vector<bool> pchk(s,1);
void sieve(){ pchk[0] = pchk[1] = false; for(int i = 2;i<s;++i) if(pchk[i]) for(int j = 2 * i;j<s;j += i)pchk[j] = false;}
//**************************************************************************************************************************************************************************************************************************************
 
void solve()
{
    int n;
    cin>>n;
    while(n--){
        ll x;
        cin>>x;
        if(isPerfectSquare(x)){
            if(pchk[sqrt(x)]){
                cout<<"YES\n";
            }
            else cout<<"NO\n";
        }
        else cout<<"NO\n";
    }
}
int main() {
    IOS;
    sieve();
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
