#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
    bool isPalindrome(ListNode *head)
    {
        vector<int> vec;
        // int len=0;
        ListNode *temp = head;
        while (temp)
        {
            vec.push_back(temp->val);
            temp = temp->next;
        }

        int first = 0, last = vec.size() - 1;

        while (first <= last)
        {
            if (vec[first] != vec[last])
                return false;
            first++, last--;
        }
        return true;
    }
};