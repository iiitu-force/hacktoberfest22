# include<bits/stdc++.h>
using namespace std;

int findMinStep(string board, string hand) {
	vector<int> freq(26, 0);
	for(char c: hand)
		freq[c - 'A']++;
	unordered_map<string, int> cache;
	return dfs(board, freq, cache);
}

int dfs(string board, vector<int>& freq, unordered_map<string, int>& cache) {
    string key = board + "#" + serialize(freq);
	if(cache.count(key)) {
        return cache[key];
    }
	int r = INT_MAX;
	if(board.length() == 0) {            // base case => we have removed all the balls from table
		r = 0;
	} else {
		for(int i = 0; i < board.length(); i++) {     // try inserting a ball from hand at every position on row of balls
			for(int j = 0; j < freq.size(); j++) {       // try all the balls at every position
                bool worthTrying = false;
                if(board[i] - 'A' == j)
                    worthTrying = true;
                else if(0 < i && board[i] == board[i - 1] && board[i] - 'A' != j) 
                    worthTrying = true;
                    
				if(freq[j] > 0 && worthTrying) {      // only if the frequency is more than 0, skipping this line will lead to runtime error
					board.insert(board.begin() + i, j + 'A');   // insert ball at ith index
					freq[j]--;    // update the frequency of ball

					string newStr = updateBoard(board);   // remove groups of 3 or more if possible
					int steps = dfs(newStr, freq, cache);   // recursively call the function for the new string board
					if(steps != -1) {    // steps will be -1 if we can't remove all the balls using this combination
						r = min(r, steps + 1);
					}

					freq[j]++;  // restore the frequency
					board.erase(board.begin() + i);   // remove the ball from this position to try next combination
				}
			}
		}
	}
	if(r == INT_MAX) r = -1;   // we can't remove all the balls
	cache[key] = r;
	return r;
}

string updateBoard(string board) {
	 int start = 0;
	 int end = 0; 
	 int boardLen = board.length();
	 while(start < boardLen) {
		 while(end < boardLen && board[start] == board[end]) {
			 end++;   // increment end pointer if consecutive balls are of same color
		 }
		 
		/* here, end will point to the ball next to consecutive balls of same color 
		such that  number of balls of same color = end - start */
		
		 if(end - start >= 3) {   // remove if 3 or more balls
			 string newBoard = board.substr(0, start) + board.substr(end); 
			 return updateBoard(newBoard);     // recursively check if there are more groups in the new string
		 } else {
			 start = end;
		 }
	 }
	 return board;
}

string serialize(vector<int>& freq) {
    string key = "";
    for(int i = 0; i < freq.size(); i++) {
        if(freq[i] > 0)
        key += to_string((char) i + 'A') + to_string(freq[i]);
    }
    return key;
}  

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string board, hand;

    cin >> board >> hand;

    cout << findMinStep(board, hand) << "\n";

    return 0;
}