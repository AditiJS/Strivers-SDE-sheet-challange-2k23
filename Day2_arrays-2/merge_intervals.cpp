#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int n = intervals.size();
        vector<vector<int>> res;
        vector<pair<int, int>> vec, fin;

        for (int i = 0; i < n; i++)
        {
            vec.push_back(make_pair(intervals[i][0], intervals[i][1]));
        }

        sort(vec.begin(), vec.end());
        pair<int, int> pr = vec[0];
        for (int i = 1; i < n; i++)
        {
            if (pr.second >= vec[i].first)
            {
                pr.second = max(vec[i].second, pr.second);
            }
            else
            {
                fin.push_back(pr);
                pr = vec[i];
            }
        }

        fin.push_back(pr);

        for (int i = 0; i < fin.size(); i++)
        {
            vector<int> v1;
            v1.push_back(fin[i].first);
            v1.push_back(fin[i].second);
            res.push_back(v1);
        }
        return res;
    }
};