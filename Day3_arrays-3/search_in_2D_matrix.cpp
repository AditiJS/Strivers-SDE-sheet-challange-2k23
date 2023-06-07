#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        if (target < matrix[0][0])
            return false;

        for (int i = 0; i < matrix.size(); i++)
        {
            if (target > matrix[i][matrix[i].size() - 1])
                continue;
            else
            {
                int start = 0, end = matrix[i].size() - 1;

                while (start <= end)
                {
                    int mid = ((start - end) / 2) + end;
                    // cout<<matrix[i][mid]<<endl;
                    if (matrix[i][mid] == target)
                        return true;
                    else if (matrix[i][mid] > target)
                        end = mid - 1;
                    else
                        start = mid + 1;
                }
            }
        }
        return false;
    }
};