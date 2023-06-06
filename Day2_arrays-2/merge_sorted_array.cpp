#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
    {

        for (int i = 0; i < n; i++)
        {
            if (m < nums1.size())
            {
                nums1[m] = nums2[i];
                m++;
            }
            else
            {
                nums1.push_back(nums2[i]);
            }
        }

        sort(nums1.begin(), nums1.end());
    }
};