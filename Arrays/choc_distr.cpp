// Chocolate Distribution 
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int findMinDiff(vector<int> a, int m){
    sort(a.begin(),a.end());

    int mini = INT_MAX;
    for(int i = 0;i+m -1<a.size();i++){
        int d = a[i+m-1] - a[i];

        if(d < mini){
            mini = d;
        }
    }
    return mini;

}
int main() {
    vector<int> a = {3, 4, 1, 9, 56, 7, 9, 12};
    int m = 5;
  	
    cout << findMinDiff(a, m);
    return 0;
}