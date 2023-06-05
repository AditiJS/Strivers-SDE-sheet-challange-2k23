#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        vector<int> rows(matrix.size(), -1);
        vector<int> cols(matrix[0].size(), -1);

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[i].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    rows[i] = 0;
                    cols[j] = 0;
                }
            }
        }

        for (int i = 0; i < rows.size(); i++)
        {
            for (int j = 0; j < cols.size(); j++)
            {
                if (rows[i] == 0 || cols[j] == 0)
                {
                    // cout<<i<<" "<<j<<endl;
                    matrix[i][j] = 0;
                }
            }
        }
    }
};