

class Solution {
public:

    int climb(int n, vector<int>& memo) {
        // Base cases
        if (n == 1) return 1;
        if (n == 2) return 2;
        
        // Check if already computed
        if (memo[n] != -1) {
            return memo[n];
        }
        
        // Recursively compute and store the result in memo
        memo[n] = climb(n - 1, memo) + climb(n - 2, memo);
        return memo[n];
    }


    int climbStairs(int n) {
        // Initialize memoization array with -1 to indicate uncomputed values
        vector<int> memo(n + 1, -1);
        return climb(n, memo);
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)
