class Solution {
public:
    unordered_map<int, int> ways;
    // int tribonacci(int n) {
    //     // if (n < 3) {
    //     //     return n;
    //     // }
    //     hash[0] = 0;
    //     hash[1] = 1;
    //     hash[2] = 1;
    //     if (hash.find(n) != hash.end()) {
    //         return hash[n];
    //     } else {
    //         // return h[n];
    //         hash[n] = tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
    //     }

    //     return hash[n];
    // }

    int tribonacci(int n){
        ways[0] = 0;
        ways[1] = 1;
        ways[2] = 1;

        for(int i = 3; i <= n; i++){
            ways[i] = ways[i -1] +ways[i - 2] +ways[i -3];
        }
        return ways[n];
    }
};