#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
 
int row[] = { -1, -1, -1, 0, 1, 0, 1, 1 };
int col[] = { -1, 1, 0, -1, -1, 1, 0, 1 };
 
// Function to check if it is safe to go to position (x, y)
// from the current position. The function returns false if (x, y)
// is not valid matrix coordinates or (x, y) represents water or
// position (x, y) is already processed
 
bool isSafe(vector<vector<int>> const &mat, int x, int y,
        vector<vector<bool>> const &processed)
{
    return (x >= 0 && x < mat.size()) && (y >= 0 && y < mat[0].size()) &&
        mat[x][y] && !processed[x][y];
}
 
void BFS(vector<vector<int>> const &mat, vector<vector<bool>> &processed, int i, int j)
{
    queue<pair<int, int>> q;
    q.push(make_pair(i, j));
 
    processed[i][j] = true;
 
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int k = 0; k < 8; k++)
        {
            if (isSafe(mat, x + row[k], y + col[k], processed))
            {
                processed[x + row[k]][y + col[k]] = 1;
                q.push(make_pair(x + row[k], y + col[k]));
            }
        }
    }
}
 
int countIslands(vector<vector<int>> const &mat)
{
    // base case
    if (mat.size() == 0) {
        return 0;
    }
 
    // `M × N` matrix
    int M = mat.size();
    int N = mat[0].size();
 
    vector<vector<bool>> processed(M, vector<bool>(N));
 
    int island = 0;
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mat[i][j] && processed[i][j] == 0)
            {
                BFS(mat, processed, i, j);
                island++;
            }
        }
    }
 
    return island;
}
 
int main()
{
    vector<vector<int>> mat =
    {
        { 1, 0, 1, 0, 0, 0, 1, 1, 1, 1 },
        { 0, 0, 1, 0, 1, 0, 1, 0, 0, 0 },
        { 1, 1, 1, 1, 0, 0, 1, 0, 0, 0 },
        { 1, 0, 0, 1, 0, 1, 0, 0, 0, 0 },
        { 1, 1, 1, 1, 0, 0, 0, 1, 1, 1 },
        { 0, 1, 0, 1, 0, 0, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 0, 1, 1, 1, 0, 0 },
        { 0, 0, 0, 1, 0, 0, 1, 1, 1, 0 },
        { 1, 0, 1, 0, 1, 0, 0, 1, 0, 0 },
        { 1, 1, 1, 1, 0, 0, 0, 1, 1, 1 }
    };
 
    cout << "The total number of islands is " << countIslands(mat) << endl;
 
    return 0;
}