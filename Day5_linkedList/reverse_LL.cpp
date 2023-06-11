#include<bits/stdc++.h>
using namespace std;

template <typename T>
class LinkedListNode
{
public:
    T data;
    LinkedListNode<T> *next;
    LinkedListNode(T data)
    {
        this->data = data;
        this->next = NULL;
    }
};

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head)
{
    if (!head || !head->next)
        return head;

    LinkedListNode<int> *prev, *curr, *front;

    prev = NULL, curr = head, front = head->next;

    while (curr != NULL)
    {
        curr->next = prev;
        prev = curr;
        curr = front;
        if (front)
            front = front->next;
    }

    return prev;
}