#include <bits/stdc++.h>
using namespace std;

double maximumValue(vector<pair<int, int>> &items, int n, int w)
{
    vector<pair<double, int>> vec;

    for (int i = 0; i < n; i++)
    {
        double temp = (double)(items[i].second) / (double)(items[i].first);
        vec.push_back(make_pair(temp, i));
    }

    sort(vec.begin(), vec.end());
    int sz = vec.size();
    int weight = 0;
    double profit = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        // check if adding the current weight exceeds the given constraint of weight
        if (weight + items[vec[i].second].first <= w)
        {
            weight += items[vec[i].second].first;
            profit += items[vec[i].second].second;
        }
        else
        {
            int rem = w - weight;
            profit += (vec[i].first * rem);
            break;
        }
    }

    return profit;
}