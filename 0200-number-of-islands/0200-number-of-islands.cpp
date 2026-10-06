class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        if (grid.empty()) {
            return 0;
        }
        queue<pair<int, int>> q;
        int dir[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        int m = grid.size();
        int n = grid[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') { // use ''(denotes char) instead of
                                         // ""(denotes string) ans
                    count++;
                    grid[i][j] = '0';
                    q.push({i, j});

                    while (!q.empty()) {
                        auto [r, c] = q.front();
                        q.pop();
                        for (int d = 0; d < 4; d++) {
                            int nr = r + dir[d][0];
                            int nc = c + dir[d][1];
                            if (0 <= nr && nr < m && 0 <= nc && nc < n &&
                                grid[nr][nc] == '1') {
                                grid[nr][nc] = '0';
                                q.push({nr, nc});
                            }
                        }
                    }
                }
            }
        }
        return count;
    }
};