#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<pair<int, int>> ele_ind;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            ele_ind.push_back(make_pair(nums[i], i));
        }
        sort(ele_ind.begin(), ele_ind.end());

        int start = 0, end = ele_ind.size() - 1;
        while (start < end)
        {
            int sum = ele_ind[start].first + ele_ind[end].first;
            if (sum == target)
            {
                ans.push_back(ele_ind[start].second);
                ans.push_back(ele_ind[end].second);
                return ans;
            }
            else if (sum > target)
                end--;
            else
                start++;
        }

        return ans;
    }
};

