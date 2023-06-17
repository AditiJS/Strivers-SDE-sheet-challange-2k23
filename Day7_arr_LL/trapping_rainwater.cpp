#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height)
    {
        int total = 0, n = height.size();
        vector<int> prefix(n, 0), suffix(n, 0);
        int leftMax = 0, rightMax = 0;
        for (int i = 0; i < n; i++)
        {
            leftMax = max(leftMax, height[i]);
            prefix[i] = leftMax;

            rightMax = max(rightMax, height[n - i - 1]);
            suffix[n - i - 1] = rightMax;
        }

        for (int i = 0; i < n; i++)
        {
            total += abs(min(prefix[i], suffix[i]) - height[i]);
        }

        return total;
    }
};