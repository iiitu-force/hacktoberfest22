#include <bits/stdc++.h>
using namespace std;
 
#define endl '\n'
#define int long long
 
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
 
char g[8][8];
int c = 0;
 
bool is_safe(int i, int j) {
    if (g[i][j] == '*')
        return false;
 
    for (int k = i; k >= 0; k--)
        if (g[k][j] == 'Q')
            return false;
 
    for (int k = i, l = j; k >= 0 && l >= 0; k--, l--)
        if (g[k][l] == 'Q')
            return false;
 
    for (int k = i, l = j; k >= 0 && l < 8; k--, l++)
        if (g[k][l] == 'Q')
            return false;
 
    return true;
}
 
void solve(int i=0) {
    if (i == 8) {
        c++;
        return;
    }
 
    for (int j = 0; j < 8; j++) {
        if (is_safe(i, j)) {
            g[i][j] = 'Q';
            solve(i+1);
            g[i][j] = '.';
        }
    }
}
 
signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
 
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> g[i][j];
 
    solve();
    cout << c << endl;
}