#include<bits/stdc++.h>
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
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *ptr = head;
        ListNode *temp = head;
        //    ListNode*prev;
        int length = 1;
        while (ptr->next)
        {
            ptr = ptr->next;
            length++;
        }

        // prev=ptr;
        ptr->next = head;
        k %= length;
        int last = length - k;

        while (last--)
        {
            temp = temp->next;
            ptr = ptr->next;
        }

        ptr->next = NULL;

        return temp;
    }
};