#include <bits/stdc++.h>
using namespace std;

int helper(int sx, int sy, int ex, int ey, vector<vector<int>> &grid, int zero)
{
    int m = grid.size();
    int n = grid[0].size();

    if (sx <= 0 or sy <= 0 or sx >= m or sy >= n)
        return 0;
    if (sx == ex and sy == ey)
    {
        return 1;
    }

    grid[sx][sy] = -1;
    zero--;

    int paths = helper(sx + 1, sy, ex, ey, grid, zero) + helper(sx, sy + 1, ex, ey, grid, zero) + helper(sx - 1, sy, ex, ey, grid, zero) + helper(sx, sy - 1, ex, ey, grid, zero);

    grid[sx][sy] = 0;

    return paths;
}

int numberOfPaths(vector<vector<int>> &grid)
{

    int startX;
    int startY;

    int endX;
    int endY;

    int zero = 0;

    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] == 1)
            {
                startX = i;
                startY = j;
            }
            else if (grid[i][j] == 2)
            {
                endX = i;
                endY = j;
            }
            else if (grid[i][j] == 0)
            {
                zero++;
            }
        }
    }
    return helper(startX, startY, endX, endY, grid, zero);
}

int main()
{

    int m, n;
    cin >> m >> n;

    vector<vector<int>> grid(m, vector<int>(n));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }
    cout << numberOfPaths(grid) << endl;

    return 0;
}