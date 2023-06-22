#include <bits/stdc++.h>
using namespace std;

string kthPermutation(int n, int k)
{
    vector<char> nums(n);
    int fact = 1, temp = n - 1;
    char c = '1';

    for (int i = 0; i < n; i++, c++, temp--)
    {
        if (temp != 0)
            fact *= (temp);

        nums[i] = c;
    }

    string ans = "";
    k -= 1;

    while (1)
    {
        ans = ans + nums[k / fact];
        // cout<<"nums "<<k/fact<<" = "<<nums[k/fact]<<endl;
        nums.erase(nums.begin() + k / fact);
        if (nums.size() == 0)
            break;
        k = k % fact;
        fact = fact / nums.size();
    }

    return ans;
}
