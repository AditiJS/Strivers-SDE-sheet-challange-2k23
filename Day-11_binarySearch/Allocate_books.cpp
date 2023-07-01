#include <bits/stdc++.h>
using namespace std;

long long isPossible(vector<int> &A, long long pages, long long students)
{
    long long cnt = 0;
    long long sumAllocated = 0;
    for (long long i = 0; i < A.size(); i++)
    {
        if (sumAllocated + A[i] > pages)
        {
            cnt++;
            sumAllocated = A[i];
            if (sumAllocated > pages)
                return false;
        }
        else
        {
            sumAllocated += A[i];
        }
    }
    if (cnt < students)
        return true;
    return false;
}

long long ayushGivesNinjatest(int B, int m, vector<int> A)
{
    if (B > A.size())
        return -1;
    long long low = A[0];
    long long high = 0;
    // to find minimum value and sum of all pages
    for (long long i = 0; i < A.size(); i++)
    {
        high = high + A[i];
        low = min(low, (long long)A[i]);
    }
    // binary search
    while (low <= high)
    {
        long long mid = (low + high) >> 1;
        if (isPossible(A, mid, B))
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return low;
}