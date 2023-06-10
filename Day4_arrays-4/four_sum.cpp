#include<bits/stdc++.h>
using namespace std;

#define ll long long
string fourSum(vector<int> nums, int target, int sz)
{
    vector<vector<ll>> ans;
    // vector<vector<int>> fin;
    if (nums.size() == 0)
        return "No";

    sort(nums.begin(), nums.end());
    ll n = nums.size();

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            ll rem = (ll)(target) - (ll)(nums[i]) - (ll)(nums[j]);

            ll start = j + 1, end = n - 1;

            while (start < end)
            {
                ll temp = nums[start] + nums[end];

                if (temp == rem)
                {
                    // vector<ll> vec(4, 0);
                    // vec[0] = nums[i];
                    // vec[1] = nums[j];
                    // vec[2] = nums[start];
                    // vec[3] = nums[end];
                    // ans.push_back(vec);

                    // while (start < end && nums[start] == vec[2])
                    // ++start;

                    // while (start < end && nums[end] == vec[3])
                    // --end;

                    return "Yes";
                }
                else if (temp < rem)
                    start++;
                else
                    end--;
            }

            while (j + 1 < n && nums[j] == nums[j + 1])
                ++j;
        }

        while (i + 1 < n && nums[i] == nums[i + 1])
            ++i;
    }

    // for(int i=0;i<ans.size();i++){
    //     vector<int> temp;
    //     for(int j=0;j<ans[i].size();j++)
    //     temp.push_back(int(ans[i][j]));
    //     fin.push_back(temp);
    // }
    // return fin;

    return "No";
}