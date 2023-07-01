#include<bits/stdc++.h>
using namespace std;

int getMedian(vector<vector<int>> &matrix)
{
    vector<int> vec;
    int n = matrix.size(), m = matrix[0].size(), total = n * m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            vec.push_back(matrix[i][j]);
        }
    }

    sort(vec.begin(), vec.end());

    return vec[total / 2];
}