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
    ListNode *middleNode(ListNode *head)
    {
        ListNode *slowptr;
        ListNode *fastptr;
        slowptr = head;
        fastptr = head;
        ListNode *temp;
        while (fastptr->next != NULL && fastptr != NULL)
        {
            temp = fastptr->next;
            slowptr = slowptr->next;
            if (temp->next != NULL)
                fastptr = fastptr->next->next;
            else
                break;
        }

        return slowptr;
    }
};