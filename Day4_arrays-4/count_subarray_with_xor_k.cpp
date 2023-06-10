#include <bits/stdc++.h>
using namespace std;

int subarraysXor(vector<int> &arr, int x)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int xor_arr = arr[i];

        if (xor_arr == x)
        {
            count++;
        }

        for (int j = i + 1; j < arr.size(); j++)
        {
            xor_arr = xor_arr ^ arr[j];
            if (xor_arr == x)
            {
                count++;
            }
        }
    }
    return count;
}