#include <bits/stdc++.h>
using namespace std;

long long getInversions(long long *nums, int n)
{
    long long inv = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] > nums[j])
            {
                inv++;
            }
        }
    }

    return inv;
}