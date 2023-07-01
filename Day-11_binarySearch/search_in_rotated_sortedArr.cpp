#include<bits/stdc++.h>
using namespace std;

int search(int *arr, int n, int k)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        // if mid points the target
        if (arr[mid] == k)
            return mid;

        // if left part is sorted:
        if (arr[low] <= arr[mid])
        {
            if (arr[low] <= k && k <= arr[mid])
            {
                // element exists in left part
                high = mid - 1;
            }
            else
            {
                // element does not exist in left part
                low = mid + 1;
            }
        }
        else
        { // if right part is sorted:
            if (arr[mid] <= k && k <= arr[high])
            {
                // element exists in right part
                low = mid + 1;
            }
            else
            {
                // element does not exist in right part
                high = mid - 1;
            }
        }
    }
    return -1;
}
