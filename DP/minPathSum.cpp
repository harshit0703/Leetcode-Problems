#include <bits/stdc++.h>
using namespace std;

// void solve(int row, int col, int currSum, int &pathSum, vector<vector<int>> &grid, vector<vector<int>> &dp)
// {

//     if (row >= grid.size() || col >= grid[0].size())
//         return;

//     currSum += grid[row][col];

//     if (dp[row][col] != -1)

//         if (currSum > pathSum)
//             return;

//     if (row == grid.size() - 1 && col == grid[0].size() - 1)
//     {
//         pathSum = min(pathSum, currSum);
//         return;
//     }

//     // two options either can go right or can go down
//     solve(row + 1, col, currSum, pathSum, grid);
//     solve(row, col + 1, currSum, pathSum, grid);
// }

int minPathSum(vector<vector<int>> &grid)
{

    // int currSum = 0;
    // int pathSum = INT_MAX;
    int m = grid.size();
    int n = grid[0].size();
    // vector<vector<int>> dp(m, vector<int>(n, -1));

    // solve(0, 0, currSum, pathSum, grid, dp);
    // return pathSum;

    vector<vector<int>> dp(m, vector<int>(n));

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
                dp[i][j] = grid[i][j];

            else if (i == 0)
                dp[i][j] = grid[i][j] + dp[i][j - 1];

            else if (j == 0)
                dp[i][j] = grid[i][j] + dp[i - 1][j];
        }
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + grid[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

    return dp[m - 1][n - 1];
}

int main()
{
    vector<vector<int>> grid = {{1, 3, 1},
                                {1, 5, 1},
                                {4, 2, 1}};

    cout << minPathSum(grid);

    return 0;
}