class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int size1 = grid.size();
        int harr[size1],varr[size1];
        for(int i =0;i<size1;i++){
            harr[i] = *max_element(grid[i].begin(),grid[i].end());
        }
        for(int j=0;j<size1;j++){
            int max1 = grid[0][j];
            for(int i=0;i<size1;i++){
                if(max1<grid[i][j]){
                    max1 = grid[i][j];
                }
            }
            varr[j] = max1;
        }
        int hsum=0;
        for(int i=0;i<size1;i++){
            for(int j=0;j<size1;j++){
                hsum+=min(varr[j],harr[i])-grid[i][j];
            }
        }
        return hsum;
    }
};
//
Idea:
For grid[i][j], it can't be higher than the maximun of its row nor the maximum of its col.
So the maximum increasing height for a building at (i, j) is min(row[i], col[j]) - grid[i][j]

Codes:
row: maximum for every row
col: maximum for every col
The fisrt loop of grid calcule maximum for every row and every col.
The second loop calculate the maximum increasing height for every building.

Complexity
O(N^2)

C++

    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int> col(n, 0), row(n, 0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                row[i] = max(row[i], grid[i][j]);
                col[j] = max(col[j], grid[i][j]);
            }
        }
        int res = 0;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                res += min(row[i], col[j]) - grid[i][j];
        return res;
    }