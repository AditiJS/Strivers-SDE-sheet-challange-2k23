#include <bits/stdc++.h>
using namespace std;

void helper(int i, string &s, vector<string> &ans)
{
    if (i == s.length())
    {
        ans.push_back(s);
        return;
    }

    for (int index = i; index < s.length(); index++)
    {
        swap(s[index], s[i]);
        helper(i + 1, s, ans);
        swap(s[index], s[i]);
    }
}

vector<string> findPermutations(string &s)
{
    vector<string> ans;

    helper(0, s, ans);

    return ans;
}