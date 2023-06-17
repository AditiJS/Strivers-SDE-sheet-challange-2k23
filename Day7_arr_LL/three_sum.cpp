#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{
    sort(arr.begin(),arr.end());
    set<vector<int>> ans;
     for (int i = 0; i < n - 3; i++)
    {
        int start = i+1,end=n-1;
        int rem = K-arr[i];
        while (start<end)
        {
            if(arr[start]+arr[end]==rem){
                vector<int> vec(3);
                vec[0]=arr[i],vec[1]=arr[start],vec[2]=arr[end];
                ans.insert(vec);
                start++,end--;
            }
            else if (arr[start] + arr[end] < rem) start++;
            else end--;
        }
    }

    vector<vector<int>> fin(ans.begin(),ans.end());

    return fin;

}