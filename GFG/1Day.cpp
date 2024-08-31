#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    if (n <= 1)
        return 0;

    int profit = 0;
    for (int i = 1; i < n; ++i)
    {
        // If current price is greater than previous price, add the profit
        if (prices[i] > prices[i - 1])
        {
            profit += prices[i] - prices[i - 1];
        }
    }
    return profit;
}

int main()
{
    vector<int> prices1 = {10, 22, 5, 75, 65, 80};
    vector<int> prices2 = {2, 30, 15, 10, 8, 25, 80};

    cout << "Maximum profit for prices1: " << maxProfit(prices1) << endl;
    cout << "Maximum profit for prices2: " << maxProfit(prices2) << endl;

    return 0;
}
