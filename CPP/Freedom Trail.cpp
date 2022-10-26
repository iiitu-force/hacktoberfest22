# include<bits/stdc++.h>
using namespace std;

vector<vector<int>> memo;
int helper_fn(string& ring, string& key, int ring_pos, int key_pos) {
	if (key_pos >= key.size()) return 0;
	int cost = INT_MAX, n = ring.size();
	if (memo[ring_pos][key_pos] > 0) {
			return memo[ring_pos][key_pos];
	}
	/// it's dp, not greedy, because you don't know what's comming though
	for (int j = 0, i = ring_pos; j < n; ++i, ++j) {
		if (i >= n) i = 0;
		if (ring[i] == key[key_pos]) {
			cost = min(cost,min(j,n-j)+1+helper_fn(ring,key,i,key_pos+1));
		}
	}
	memo[ring_pos][key_pos] = cost;
	return cost;
}

int findRotateSteps(string ring, string key) {
	int n = ring.size(), m = key.size();
	memo = vector<vector<int>>(n,vector<int>(m,0));
	return helper_fn(ring,key,0,0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string ring, key;

	cin >> ring >> key;

    cout << findRotateSteps(ring, key) << "\n";

    return 0;
}