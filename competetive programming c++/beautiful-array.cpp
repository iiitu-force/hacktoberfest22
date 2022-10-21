#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        /* code */
        long long n, k, b, s;
        cin >> n >> k >> b >> s;
        // min sum is b*k and max sum is b*k + k-1 *n; as both beauty is b
        vector<long long> arr(n);
        arr[0] = b * k;
        long long sum = s - b * k;

        if (s >= b * k && s <= b * k + (k - 1) * n)
        {
            for (int i = 0; i < n; i++)
            {
                long long now = min(k - 1, sum);
                arr[i] += now;
                sum -= now;
            }
            if (sum > 0)
            {
                cout << -1 << endl;
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}