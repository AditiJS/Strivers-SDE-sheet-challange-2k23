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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        int sum = 0;
        int carry = 0;
        ListNode *ans = new ListNode(-1);
        ListNode *ptr = ans;
        while (l1 && l2)
        {
            sum = l1->val + l2->val + carry;
            carry = sum / 10;
            sum %= 10;
            ListNode *newnode = new ListNode(sum);
            ptr->next = newnode;
            ptr = newnode;
            sum = 0;
            l1 = l1->next;
            l2 = l2->next;
        }

        while (l1)
        {
            sum = l1->val + carry;
            carry = sum / 10;
            sum %= 10;
            ListNode *newnode = new ListNode(sum);
            ptr->next = newnode;
            ptr = newnode;
            sum = 0;
            l1 = l1->next;
        }
        while (l2)
        {
            sum = l2->val + carry;
            carry = sum / 10;
            sum %= 10;
            ListNode *newnode = new ListNode(sum);
            ptr->next = newnode;
            ptr = newnode;
            sum = 0;
            l2 = l2->next;
        }

        if (carry != 0)
        {
            ListNode *newnode = new ListNode(carry);
            ptr->next = newnode;
        }
        return ans->next;
    }
};