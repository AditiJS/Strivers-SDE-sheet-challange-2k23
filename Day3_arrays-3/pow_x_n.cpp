#include<bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        double ans = 1;
        long long pow = n;

        if (pow < 0)
            pow *= (-1);

        while (pow)
        {
            if (pow % 2 == 0)
            {
                x = x * x;
                pow /= 2;
            }
            else
            {
                ans = ans * x;
                pow -= 1;
            }
        }

        if (n < 0)
            ans = double(1) / ans;

        return ans;
    }
};