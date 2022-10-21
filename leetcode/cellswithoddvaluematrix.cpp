class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
         vector<vector<int>> v(m,vector<int>(n,0));
        int cnt =0;
        for(int i =0;i<indices.size();i++){
            int x = indices[i][0];
            for(int j =0;j<n;j++){
                v[x][j]+=1;
            }
            int y = indices[i][1];
            for(int j =0;j<m;j++){
                v[j][y]+=1;
            }
        }
        for(int i =0;i<m;i++){
            for(int j =0;j<n;j++){
                if(v[i][j]%2 != 0){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};