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
    void helperFun(ListNode *start, ListNode *end)
    {
        ListNode *prev = NULL, *curr = start, *nxt = start->next;

        while (prev != end)
        {
            curr->next = prev;
            prev = curr;
            curr = nxt;
            if (nxt)
                nxt = nxt->next;
        }
    }
    ListNode *reverseKGroup(ListNode *head, int k)
    {
        if (!head || !head->next || k <= 1)
            return head;

        int inc = k - 1;
        ListNode *start = head, *end = head;
        while (inc--)
        {
            end = end->next;
            if (!end)
                return head;
        }

        ListNode *temphead = reverseKGroup(end->next, k);
        helperFun(start, end);
        start->next = temphead;

        return end;
    }

};