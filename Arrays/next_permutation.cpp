// 31. Next Permutation
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> nums = {1,1,5};

    next_permutation(nums.begin(),nums.end());
    for (auto i: nums) {
      	cout << i << " ";
    }
    // bool hasNext = next_permutation(nums.begin(), nums.end());

    // if (hasNext) {
    //     for (int n : nums)
    //         cout << n << " ";
    // } else {
    //     cout << "No next permutation";
    // }

    return 0;
}
