#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &arr)
    {
        int curr = INT_MAX - 1;
        for (int i = 0; i < arr.size(); i++)
        {
            if (curr == arr[i])
            {
                arr.erase(arr.begin() + i);
                i--;
            }
            else
            {
                curr = arr[i];
            }
        }

        return arr.size();
    }
};