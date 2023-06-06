#include <bits/stdc++.h>
using namespace std;

#define sz 100001
class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        vector<int> freq(sz, 0);

        for (int i = 0; i < nums.size(); i++)
            freq[nums[i]]++;

        int i = 0;
        for (i = 0; i < sz; i++)
            if (freq[i] > 1)
                break;

        return i;
    }
};