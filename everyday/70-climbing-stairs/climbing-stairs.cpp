class Solution {
public:
    unordered_map<int,int> hash;
    int climbStairs(int n) {
        // if(n == 1)return 1;
        // if(n == 2) return 2;
        // if hash found then return
        // // else add value to hash
        hash[1] = 1;
        hash[2] = 2;

        if(hash.find(n) != hash.end()){
            return hash[n];
        }else{
            hash[n] = climbStairs(n -1) + climbStairs(n -2);
        }
        return hash[n];
    }
};