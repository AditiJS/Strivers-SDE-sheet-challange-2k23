#include <bits/stdc++.h>
using namespace std;
int findMinimumCoins(int amount)
{
    vector<int> coins = {1000, 500, 100, 50, 20, 10, 5, 2, 1};

    int n = coins.size();

    int i = 0, count = 0;

    while (amount > 0)
    {
        // if amount is greater than current coin
        if (amount >= coins[i])
        {
            // we need decr number of current coins
            int decr = (amount / coins[i]);
            // decrement amount accordingly
            amount -= (coins[i] * decr);
            // increment count
            count += decr;
        }

        // we are dividing current amount by current coin so the remaining amount will always be less than amount of current coin
        // hence we can directly check for next coin
        i++;
    }

    return count;
}
