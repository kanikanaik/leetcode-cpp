class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> sumLeft(n,0);
        vector<int> sumRight(n,0);

        for(int i = 1; i < n; i++){
            sumLeft[i] = sumLeft[i -1] + nums[i - 1];
        }

        for( int i = n-2; i >= 0; i--){
            sumRight[i] = sumRight[i +1] + nums[i + 1];
        }

        for(int i =0 ; i < n; i++){
            if(sumLeft[i] == sumRight[i]){
                return i;
            }
        }
        return -1;
    }
};

// 1,7,3,6,5,6
// 1,1,8,11,17,22,28
// 28,21,18,12,7,1


// [1,7,3,6,5,6]
// sumLeft = {0,1,8,11,17,22};
// sumRight = {27,20,17,11,6,0}