#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

// int findKthLargest(vector<int>& nums, int k) {
        
// }

// int sort(vector<int>& nums){
//     for(int i =0;i< nums.size();i++){

//     }
// }
int main(){
    vector<int> nums = {3,2,3,1,2,4,5,5,6};
    int k = 4;
    sort(nums.begin(),nums.end());

    cout << "the k-th largest element is : " << nums[nums.size() - k ] << endl;
}
