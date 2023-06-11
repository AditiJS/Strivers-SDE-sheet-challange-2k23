#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        ListNode *start = new ListNode();
        start->next = head;
        // we have to start before head cause n=1 is edge case
        
        ListNode *forward = start;
        ListNode *backward = start;

        while (n--)
        {
            forward = forward->next;
        }

        while (forward->next != NULL)
        {
            forward = forward->next;
            backward = backward->next;
        }

        backward->next = backward->next->next;

        return start->next;
    }
};