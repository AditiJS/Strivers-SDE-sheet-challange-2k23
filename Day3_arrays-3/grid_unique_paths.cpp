// each time we are taking an exactly m + n - 2 number of steps to reach the end.
// From start to reach the end we need a cols-1 number of rightward direction jumps and a certain number of row-1 downward direction jumps.
// (row+col-2) C (row-1)  or (row+col-2) C (col-1)

#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int uniquePaths(int m, int n)
    {
        int N = n + m - 2;
        int r = m - 1;
        double res = 1;

        for (int i = 1; i <= r; i++)
            res = res * (N - r + i) / i;
        return (int)res;
    }
};