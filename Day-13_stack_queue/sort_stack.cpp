#include<bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

void insertAtRightPlace(stack<int> &st, int &temp)
{
    if (st.empty() || st.top() <= temp)
    {
        st.push(temp);
        return;
    }

    int num = st.top();
    st.pop();

    insertAtRightPlace(st, temp);

    st.push(num);
}

void sortStack(stack<int> &st)
{
    if (st.empty())
        return;

    int temp = st.top();
    st.pop();

    sortStack(st);

    insertAtRightPlace(st, temp);
}