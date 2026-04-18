class Solution {
public:
    int climbStairs(int n) {
        // vector<int> dp(n + 1, -1);
        if(n <= 1) return n;
        int prev, prev2, curr;
        // Base cases
       prev2 = 1;
        prev = 1;

        // Fill dp array using bottom-up dynamic programming
        for (int i = 2; i <= n; i++) {
            curr = prev + prev2;
            prev2 = prev;
            prev =curr;
        }

        // Print the nth Fibonacci number
       return prev;
    }
};