#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
// INF + INF will not overflow

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    int a[n+1]; a[0] = -INF;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    stack<int> s; s.push(0);  // Only has candidates that could be the answer

    for (int i = 1; i <= n; i++) {
        // if the prev value (i-x) is >= current value (i), prev value will never be solution
        while (a[s.top()] >= a[i])
            s.pop();

        cout << s.top() << " ";
        s.push(i);
    }
}