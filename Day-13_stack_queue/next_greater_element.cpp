#include <bits/stdc++.h>
using namespace std;

// Coding Ninjas ==>
vector<int> nextGreaterElement(vector<int> &arr, int n)
{

    stack<int> st;

    vector<int> ans(n, -1);

    // traverse from last element
    for (int i = n - 1; i >= 0; i--)
    {

        while (!st.empty())
        {

            // if(top pf the stack is greater than the current array element)
            // then at i th position insert element at top of the stack and break
            if (st.top() > arr[i])
            {

                ans[i] = st.top();

                break;
            }

            // else pop element from the stack
            st.pop();
        }

        // push element in stack
        st.push(arr[i]);
    }

    return ans;
}


// Leetcode ==>
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums2)
        {
            while (s.size() && s.top() < n)
            {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : nums1)
            ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};