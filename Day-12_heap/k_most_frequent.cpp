#include <bits/stdc++.h>
using namespace std;
vector<int> KMostFrequent(int n, int k, vector<int> &nums)
{
    // to store frequency of an element
    unordered_map<int, int> hash;

    // store freq in map
    for (auto it : nums)
    {
        hash[it]++;
    }

    // to store elements occured at specific frequency
    vector<vector<int>> freq(n + 1);

    // i th vector will contain elements that have occured i times
    for (auto it : hash)
    {
        freq[it.second].push_back(it.first);
    }

    // to store answer
    vector<int> ans;

    // start from maximum frequency 
    // an element can occur n (size of array) times at max
    for (int i = n; i >= 0; i--)
    {
        // for each element that has i occurances
        for (auto it : freq[i])
        {
            // if still we didn't get k elements
            if (k > 0)
            {
                ans.push_back(it);
                k--;
            }
            // if we get k elements
            else
                break;
        }
    }

    // answer needed in sorted order
    sort(ans.begin(), ans.end());
    return ans;
}