#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
 
using namespace std;
 
#ifdef imtiyazrasool92
#include "algos/debug.h"
#else
#define dbg(...) 92
#endif
 
vector<pair<int, int>> Q;
void run_case() {
    int N;
    cin >> N;
 
    vector<int> A(N);
    for (auto &a : A)
        cin >> a;
 
    vector<int> B(1001, -1);
    for (int i = 0; i < N; i++)
        B[A[i]] = i + 1;
 
    int answer = -1;
    for (auto &q : Q)
        if (B[q.first] != -1 && B[q.second] != -1)
            answer = max(answer, B[q.first] + B[q.second]);
 
    cout << answer;
}
 
int32_t main() {
    ios::sync_with_stdio(false);
#ifndef imtiyazrasool92
    cin.tie(nullptr);
#endif
 
    for (int i = 1; i <= 1000; i++) {
        for (int j = i; j <= 1000; j++) {
            if (gcd(i, j) == 1)
                Q.push_back({i, j});
        }
    }
 
 
    int tests = 1;
    cin >> tests;
 
    while (tests--) {
        run_case();
        cout << '\n';
    }
 
    return 0;
}
