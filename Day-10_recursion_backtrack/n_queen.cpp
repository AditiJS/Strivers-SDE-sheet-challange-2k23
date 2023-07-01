#include <bits/stdc++.h>
using namespace std;

bool isSafe(int &i, int &j, vector<vector<int>> &chess, int &n)
{
    int row = i, col = j;

    // check for current column
    while (row--)
    {
        if (chess[row][col] == 1)
            return false;
    }

    // check for left inclined diagonal
    row = i, col = j;
    while (row >= 0 && col >= 0)
    {
        if (chess[row][col] == 1)
            return false;
        row--, col--;
    }

    // check for right inclined diagonal
    row = i, col = j;
    while (row >= 0 && col <= n - 1)
    {
        if (chess[row][col] == 1)
            return false;
        row--, col++;
    }

    return true;
}

void helper(int i, vector<vector<int>> &chess, vector<vector<int>> &ans, int &n)
{

    if (i == n)
    {
        vector<int> temp;

        for (int p = 0; p < n; p++)
        {
            for (int q = 0; q < n; q++)
            {
                temp.push_back(chess[p][q]);
            }
        }

        ans.push_back(temp);
        return;
    }

    for (int j = 0; j < n; j++)
    {
        if (isSafe(i, j, chess, n) == true)
        {
            chess[i][j] = 1;
            helper(i + 1, chess, ans, n);
            chess[i][j] = 0;
        }
    }
}

vector<vector<int>> solveNQueens(int n)
{
    vector<vector<int>> ans;
    vector<vector<int>> chess;

    for (int i = 0; i < n; i++)
    {
        vector<int> vec;
        for (int j = 0; j < n; j++)
        {
            vec.push_back(0);
        }
        chess.push_back(vec);
    }

    helper(0, chess, ans, n);

    return ans;
}