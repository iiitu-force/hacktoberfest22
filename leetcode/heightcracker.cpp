class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans;
        ans = heights;
        sort(ans.begin(),ans.end());
        int cnt =0;
        for(int i =0;i<ans.size();i++){
            if(ans[i]!=heights[i]){
                cnt++;
            }
        }
        return cnt;
    }
};
int heightChecker(vector<int>& h, int res = 0) {
  vector<int> s = h;
  sort(begin(s), end(s));
  for (auto i = 0; i < h.size(); ++i) res += h[i] != s[i];
  return res;
}