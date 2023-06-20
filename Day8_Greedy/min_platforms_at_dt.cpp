#include<bits/stdc++.h>
using namespace std;

int calculateMinPatforms(int at[], int dt[], int n)
{
    sort(at, at + n);
    sort(dt, dt + n);

    int i = 1, j = 0;
    int count = 1, ans = 1;
    while (i < n && j < n)
    {
        if (at[i] <= dt[j])
        {
            count++;
            i++;
        }
        else
        {
            count--;
            j++;
        }

        // count get decreased when we get at[i]>dt[i],
        // but the highest count reached will be the actual count of platforms that we want
        ans = max(ans, count);
    }

    return ans;
}