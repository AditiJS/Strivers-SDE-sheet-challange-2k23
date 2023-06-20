#include<bits/stdc++.h>
using namespace std;

int maximumActivities(vector<int> &start, vector<int> &end) {

    int n = start.size();
    vector<pair<int,int>> v;

    // push in vector of pair <end-time, start-time>
    for(int i=0;i<n;++i){
        v.push_back(make_pair(end[i],start[i]));
    }

    // sort according to end time
    sort(v.begin(),v.end());

    int e = -1; //let first end time be -1
    int ans = 0;

    for(auto val : v){
        // if(start-time is greater than or equal to end-time)
        if(val.second>=e){
            // increment count
            ans++;
            // set e as current activity end-time
            e = val.first;
        }
    }
    return ans;
}