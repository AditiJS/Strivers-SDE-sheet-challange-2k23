#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n)
{
    set<int> setNums;

    for (int i = 0; i < nums.size(); i++)
    {
        setNums.insert(nums[i]);
    }

    int maxLen = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (!setNums.count(nums[i] - 1))
        {
            int curr = nums[i], length = 1;

            while (setNums.count(curr + 1))
            {
                curr++;
                length++;
            }

            maxLen = max(length, maxLen);
        }
    }

    return maxLen;
}