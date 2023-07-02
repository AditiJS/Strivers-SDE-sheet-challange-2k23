#include <bits/stdc++.h>
using namespace std;
vector<int> mergeKSortedArrays(vector<vector<int>> &kArrays, int k)
{
    priority_queue<int, vector<int>, greater<int>> heap;

    for (int i = 0; i < kArrays.size(); i++)
    {
        for (int j = 0; j < kArrays[i].size(); j++)
        {
            heap.push(kArrays[i][j]);
        }
    }

    vector<int> ans;

    while (!heap.empty())
    {
        ans.push_back(heap.top());
        heap.pop();
    }

    return ans;
}
