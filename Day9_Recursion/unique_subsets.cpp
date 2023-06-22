#include <bits/stdc++.h>
using namespace std;

void helper(int i, int &n, vector<int> &arr, vector<int> &temp, set<vector<int>> &ans)
{
    if (i == n)
    {
        ans.insert(temp);
        return;
    }

    temp.push_back(arr[i]);
    helper(i + 1, n, arr, temp, ans);

    temp.pop_back();
    helper(i + 1, n, arr, temp, ans);
}

vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    set<vector<int>> ans;
    vector<int> temp;
    int i = 0;

    helper(i, n, arr, temp, ans);

    vector<vector<int>> fin(ans.begin(), ans.end());

    return fin;
}