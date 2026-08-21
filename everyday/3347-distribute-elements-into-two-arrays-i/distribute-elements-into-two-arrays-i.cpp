class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int> arr1;
        vector<int> arr2;

        vector<int> result;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        for (int i = 2; i < nums.size(); i++) {
            int temp1 = arr1.size() - 1;
            int temp2 = arr2.size() - 1;
            if (arr1[temp1] > arr2[temp2]) {
                arr1.push_back(nums[i]);
            }else{
                arr2.push_back(nums[i]);
            }
        }
        //         arr1.push_back(nums[i]);
        //     }
        // if (arr1[0] > arr2[0]) {
        //     for (int i = 2; i < nums.size(); i++) {
        //         arr1.push_back(nums[i]);
        //     }
        // } else {
        //     for (int i = 2; i < nums.size(); i++) {
        //         arr2.push_back(nums[i]);
        //     }
        // }
        result.reserve(arr1.size() + arr2.size());
        result.insert(result.end(), arr1.begin(), arr1.end());
        result.insert(result.end(), arr2.begin(), arr2.end());
        return result;
    }
};