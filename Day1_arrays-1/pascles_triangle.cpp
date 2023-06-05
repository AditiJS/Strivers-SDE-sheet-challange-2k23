#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int n)
    {

        vector<vector<int>> ans;
        for (int line = 1; line <= n; line++)
        {
            vector<int> temp;
            int C = 1;
            for (int i = 1; i <= line; i++)
            {
                temp.push_back(C); // the first 1 is added already as C is initialized as 1
                C = C * (line - i) / i;
                // at i = line, C will be zero but it will not get pushed in temp
            }
            ans.push_back(temp);
        }

        return ans;
    }
};