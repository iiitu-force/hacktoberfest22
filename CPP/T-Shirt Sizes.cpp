#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, k = 1;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int n = a.length(), m = b.length();
        if(a == b)
        {
            cout << "=" << endl;
            continue;
        }
        if(a[n - 1] == b[m - 1])
        {
            if(a[n - 1] == 'S')
            {
                cout << (n > m ? "<" : ">") << endl;
            }
            else
            {
                cout << (n > m ? ">" : "<") << endl;
            }
        }
        else
        {
            if(a[n - 1] == 'L')
            {
                cout << ">" << endl;
            }
            else if(b[m - 1] == 'L')
            {
                cout << "<" << endl;
            }
            else if(a[n - 1] == 'M')
            {
                cout << ">" << endl;
            }
            else if(b[m - 1] == 'M')
            {
                cout << "<" << endl;
            }
        }
    }
    return 0;
}
