class Solution {
  public:
    int kandene(vector<int> &vec, int n)
    {
        int res = -1e9, cnt = 0;
        for(int i = 0;  i < n;  i++)
        {
            cnt += vec[i];
            res = max(res, cnt);
            if(cnt < 0)
                cnt = 0;
        }
        return res;
    }
    int maximumSumRectangle(int r, int c, vector<vector<int>> vec) 
    {
        int ans = -1e9;
        for(int k = 0;  k < r;  k++)
        {
            vector<int> arr(c, 0);
            for(int i = k;  i < r;  i++)
            {
                for(int j = 0;  j < c;  j++)
                {
                    arr[j] += vec[i][j];
                }
                ans = max(ans, kandene(arr, c));
            }
        }
        return ans;
    }
};