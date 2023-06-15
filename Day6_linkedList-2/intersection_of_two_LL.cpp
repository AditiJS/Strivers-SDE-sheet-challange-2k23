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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (!headA || !headB)
            return NULL;

        ListNode *tempA = headA, *tempB = headB;

        while (tempA || tempB)
        {
            if (tempA == tempB)
                return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
            if (tempA == NULL && tempB != NULL)
                tempA = headB;
            if (tempB == NULL && tempA != NULL)
                tempB = headA;
        }

        return NULL;
    }
};