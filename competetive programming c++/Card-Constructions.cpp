#include <bits/stdc++.h>
using namespace std;
vector<int> v(100001, 0);
void fun()
{
    v[0] = 2;
    v[1] = 7;
    for (int i = 2; i < 100000; i++)
    {
        v[i] = (i + 1) * (i + 2) + (i * (i + 1)) / 2;
    }
}

int main()
{
    fun();
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
        //auto lower = lower_bound(v.begin(), v.end(), x);
        int cnt = 0;
        while(x > 1){
          int i = upper_bound(v.begin(), v.end(), x) - v.begin();
			i--;
 
			x -= v[i];
		    cnt++;
        }
        cout << cnt << endl;
    }
}