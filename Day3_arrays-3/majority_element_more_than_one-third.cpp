#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {
        int ele_1 = -1, ele_2 = -1, count1 = 0, count2 = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (ele_1 == nums[i])
                count1++;
            else if (ele_2 == nums[i])
                count2++;
            else if (count1 == 0)
            {
                ele_1 = nums[i];
                count1++;
            }
            else if (count2 == 0)
            {
                ele_2 = nums[i];
                count2++;
            }
            else
            {
                count1--;
                count2--;
            }
        }

        count1 = 0, count2 = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == ele_1)
                count1++;
            else if (nums[i] == ele_2)
                count2++;
        }

        vector<int> ans;
        if (count1 > nums.size() / 3)
            ans.push_back(ele_1);
        if (count2 > nums.size() / 3)
            ans.push_back(ele_2);

        return ans;
    }
};