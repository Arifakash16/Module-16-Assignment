

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        for (int i = 1; i < prices.size(); ++i) {
            if (prices[i] > prices[i - 1]) {  // checking for max profit
                maxProfit += prices[i] - prices[i - 1];
            }
        }
        return maxProfit;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(1)
