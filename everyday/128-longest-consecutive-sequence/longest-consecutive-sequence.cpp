class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;
        for(int num : nums){
            set.insert(num);
        }
        int longCons = 0;

        for(int num : set){
            if(set.find(num -1) == set.end()){
                int curr = num;
                int currCons = 1;
                while(set.find(curr + 1) != set.end()){
                    curr++;
                    currCons++;
                }
                longCons = max(longCons,currCons);
            }
        }
        return longCons;
    }
};

// // 100,4,200,1,3,2 -> 1,2,3,4,100,200
// // 0,3,7,2,5,8,4,6,0,1 -> 0,0,1,2,3,4,5,6,7,8
// // 1,0,1,2 -> 0,1,1,2

