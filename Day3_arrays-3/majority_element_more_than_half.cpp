#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int element, freq = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            // if freq is 0 we set element as nums[i]
            if (freq == 0)
                element = nums[i];

            // if nums[i] is equal to element, increment freq 
            if (element == nums[i])
                freq++;
            // else decrement 
            else
                freq--;
        }
        // frequency will be n/2 at this point  

        return element;
    }
};