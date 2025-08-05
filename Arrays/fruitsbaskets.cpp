// 3477. Fruits Into Baskets II

#include <iostream>
#include <vector>
using namespace std;

int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
    int n = fruits.size();
    vector<bool> used(n, false); 
    int unplaced = 0;

    for (int i = 0; i < n; ++i) {
        bool placed = false;
        for (int j = 0; j < n; ++j) {
            if (!used[j] && baskets[j] >= fruits[i]) {
                used[j] = true;
                placed = true;
                break;
            }
        }
        if (!placed) {
            ++unplaced;
        }
    }

    return unplaced;
}

int main() {
    vector<int> fruits1 = {4, 2, 5};
    vector<int> baskets1 = {3, 5, 4};
    cout << numOfUnplacedFruits(fruits1, baskets1) << endl;  

    return 0;
}
