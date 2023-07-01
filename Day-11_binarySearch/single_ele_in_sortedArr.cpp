#include<bits/stdc++.h>
using namespace std;

int singleNonDuplicate(vector<int> &arr)
{
    int n = arr.size();

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - mid) / 2;

        if (mid % 2 == 0)
        {
            if (arr[mid] != arr[mid + 1]) // if second occurance is not at odd index
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (arr[mid] == arr[mid + 1]) // if second occurance is at odd index
                high = mid - 1;
            else
                low = mid + 1;
        }
    }

    return arr[low];
}