#include<bits/stdc++.h>
using namespace std;

int ninjaAndLadoos(vector<int> &row1, vector<int> &row2, int m, int n, int k)
{

    if (k == m + n)
    {
        if (row1[m - 1] <= row2[n - 1])
            return row2[n - 1];
        else
            return row1[m - 1];
    }

    int i = 0, j = 0, temp = 0;
    int count = 0;

    while (i < m && j < n)
    {
        if (count == k)
            return temp;

        if (row1[i] <= row2[j])
        {
            temp = row1[i];
            count++;
            i++;
        }
        else
        {
            temp = row2[j];
            count++;
            j++;
        }
    }

    if (count == k)
        return temp;

    while (i < m)
    {
        temp = row1[i];
        i++, count++;
        if (count == k)
            return temp;
    }

    while (j < m)
    {
        temp = row2[j];
        j++, count++;
        if (count == k)
            return temp;
    }

    return temp;
}