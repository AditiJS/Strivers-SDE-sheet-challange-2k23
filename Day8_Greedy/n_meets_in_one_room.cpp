#include<bits/stdc++.h>
using namespace std;

vector<int> maximumMeetings(vector<int> &start, vector<int> &end)
{

    int n = start.size();
    vector<pair<int, pair<int, int>>> temp(n);

    for (int i = 0; i < n; i++)
    {
        temp[i].first = end[i];
        temp[i].second.first = i + 1;
        temp[i].second.second = start[i];
    }

    sort(temp.begin(), temp.end());

    int prev = -1;
    vector<int> ans;
    for (auto it : temp)
    {
        if (prev < it.second.second)
        {
            ans.push_back(it.second.first);
            prev = it.first;
        }
    }

    return ans;
}