#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector<int> arr)
{
    int maxLen = 0, sum = 0;
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == 0)
            maxLen = i + 1;
        else
        {
            if (mp.find(sum) != mp.end())
            {
                maxLen = max(maxLen, i - mp[sum]);
            }
            else
            {
                mp[sum] = i;
            }
        }
    }
    return maxLen;
}