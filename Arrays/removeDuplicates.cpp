// 26. Remove Duplicates from Sorted Array

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> nums = {1,1,2};
    vector<char> expectedNums(nums.size(),'_');

    for(auto s : expectedNums){
        cout << s << " ";
    }
    return 0;
}