// implement FIFO queue using 2 stacks

#include<bits/stdc++.h>
using namespace std;

class MyQueue
{
public:
    stack<int> st;
    // MyQueue() {

    // }

    void push(int x)
    {
        st.push(x);
    }

    int pop()
    {
        if (!empty())
        {
            stack<int> temp;
            while (!empty())
            {
                int ele = st.top();
                temp.push(ele);
                st.pop();
            }
            int res = temp.top();
            temp.pop();
            while (temp.size() != 0)
            {
                int ele = temp.top();
                st.push(ele);
                temp.pop();
            }
            return res;
        }
        return -1;
    }

    int peek()
    {
        if (!empty())
        {
            stack<int> temp;
            while (!empty())
            {
                int ele = st.top();
                temp.push(ele);
                st.pop();
            }
            int res = temp.top();
            while (temp.size() != 0)
            {
                int ele = temp.top();
                st.push(ele);
                temp.pop();
            }
            return res;
        }
        return -1;
    }

    bool empty()
    {
        return st.size() == 0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */