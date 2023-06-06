#include <bits/stdc++.h>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &A, int n)
{
    pair<int, int> ans;
    sort(A.begin(), A.end());
    int sum = (n * (n + 1)) / 2, total = 0;
    for (int i = 1; i < n; i++)
    {
        if (A[i - 1] == A[i])
        {
            ans.second = A[i];
            total -= A[i];
        }
        total += A[i];
    }
    total += A[0];
    ans.first = abs(sum - total);

    return ans;
}