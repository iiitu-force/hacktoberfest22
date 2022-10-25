class Solution {
public:
    vector<vector<int>> d, h;
    int m, n, x;

    void next(int i, int j, int hp) {
        if (h[i][j] > 0 && h[i][j] <= hp) return;
        h[i][j] = hp;

        hp = max(1, hp-d[i][j]);
        if (i == 0 && j == 0) x = min(x, hp);

        if (i > 0) next(i-1, j, hp);
        if (j > 0) next(i, j-1, hp);
    }

    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        d = dungeon;
        m = d.size(); if (m == 0) return 0;
        n = d[0].size(); if (n == 0) return 0;

        h.resize(m, vector<int>(n, 0));

        x = numeric_limits<int>::max();
        next(m-1, n-1, 1);
        return x;
    }
};
