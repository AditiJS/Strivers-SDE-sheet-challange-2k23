// coding ninjas - maximum consecutive numbers
// didn't got the intution

#include <bits/stdc++.h>
using namespace std;

int longestSubSeg(vector<int> &arr, int n, int k)
{
    int i = 0, j = 0;

    for (i = 0; i < n; i++)
    {

        if (arr[i] == 0)
        {
            k--;
        }

        if (k < 0 && arr[j++] == 0)
        {

            k++;
        }
    }

    return i - j;
}