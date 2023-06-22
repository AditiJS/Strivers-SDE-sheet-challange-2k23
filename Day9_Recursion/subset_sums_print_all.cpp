#include<bits/stdc++.h>
using namespace std;
void helper(int i, vector<int> &num, int sum, vector<int> &ans)
{

    if (i >= num.size())
    {
        ans.push_back(sum);
        return;
    }

    helper(i + 1, num, sum + num[i], ans);

    helper(i + 1, num, sum, ans);
}

vector<int> subsetSums(vector<int> num, int N)
{
    int i = 0, sum = 0;
    vector<int> ans;
    helper(i, num, sum, ans);
    sort(ans.begin(), ans.end());
    return ans;
}