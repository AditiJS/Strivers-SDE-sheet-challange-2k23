#include <bits/stdc++.h>
using namespace std;

bool comparator(vector<int> j1, vector<int> j2)
{
    return j1[1] > j2[1] || (j1[1] == j2[1] && j1[0] >= j2[0]);
}

int jobScheduling(vector<vector<int>> &jobs)
{

    sort(jobs.begin(), jobs.end(), comparator);
    // sort descending according to profit

    int n = jobs.size() - 1;
    // for(int i=0;i<n;i++){
    //     cout<<"job "<<i<<" "<<jobs[i][0]<<" "<<jobs[i][1]<<endl;
    // }

    int maxDeadline = -1, profit = 0;

    for (int i = 0; i < jobs.size(); i++)
    {
        maxDeadline = max(maxDeadline, jobs[i][0]);
    }
    // find max deadline

    vector<int> dp(maxDeadline + 1, -1);
    // make array of size maxdeadline+1 to store profit we got at particular slot of time

    for (int i = 0; i < jobs.size(); i++)
    {
        int d = jobs[i][0]; // current deadline
        for (int j = d; j > 0; j--)
        // check for deadlines less than current one
        //  for any slot of time if slot is empty, fill that slot with profit of current job's profit and check for next job
        // since there can be case where d-th slot is already occupied
        {
            if (dp[j] == -1)
            {
                dp[j] = jobs[i][1];
                break;
            }
        }
    }

    // at last add all the profits
    for (int i = 1; i <= maxDeadline; i++)
    {
        if (dp[i] != -1)
        {
            profit += dp[i];
        }
    }
    return profit;
}