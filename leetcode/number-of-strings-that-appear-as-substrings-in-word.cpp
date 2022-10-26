class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt =0;
        for(int i =0;i< patterns.size();i++){
             size_t found = word.find(patterns[i]);
    if (found != string::npos){
        cnt++;
    }
        }
        return cnt;
    }
};

class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int res = 0;
        for (auto p : patterns) if (word.find(p) != -1) res++;
        return res;
    }
};