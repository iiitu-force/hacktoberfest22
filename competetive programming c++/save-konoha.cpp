#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, z;
        cin >> n >> z;
        // map<int, int> mp;
        //vector<int> v(n);
        priority_queue<int> pq;
        for (int i = 0; i < n; i++)
        {int x;
            cin >> x;
            pq.push(x);
        }
        int cnt =0;
        int f=0;
        while (z > 0)
        {
           int x =pq.top();
           if(x==0) {
                cout << "Evacuate" << endl;
                f=1;
                break;
            }
           z = z - pq.top();
           pq.pop();
           pq.push(x/2);
           cnt++;
        }
        if (f==0)
        {
            cout << cnt << endl;
        }
        
        
    }
}