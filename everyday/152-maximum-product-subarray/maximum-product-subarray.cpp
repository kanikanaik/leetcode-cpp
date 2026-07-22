class Solution {
public:
    // int maxProduct(vector<int>& nums) {
    //     // int curr = nums[0];
    //     int maxSum = INT_MIN;

    //     // int maxP = nums[0];

    //     for(int i = 1; i < nums.size(); i++){
    //         curr = max(nums[i], curr * nums[i]);
    //         maxP = max(maxP,curr);
    //     }
    //     return maxP;
    // }

    int maxProduct(vector<int>& nums) {
         int pref = 1, suff =1;
         int ans = INT_MIN;
         int n = nums.size();

        for(int i = 0; i < nums.size(); i++){
            if(pref == 0){pref = 1;}
            if(suff == 00){suff = 1;}

            pref *= nums[i];
            suff *= nums[n-i-1];
            
            ans = max(ans,max(pref,suff));
        }
        return ans;

       
    }
};