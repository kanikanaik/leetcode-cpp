#include <iostream>
#include <vector>

using namespace std;

// void printV(vector<vector<int>>& v) {
//   	for (auto i: v) {
//         for (auto j: i) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//   	cout << endl;
// }

int main(){
    int row = 3;
    int col = 3;

    vector<vector<int>> mat1 = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> mat2 = {{1,2,3},{4,5,6},{7,8,9}};


    vector<vector<int>> sum(row, vector<int>(col, 0));
    for(int i=0;i< row;i++){
        
        for(int j=0; j< col;j++){
            sum[i][j] = mat1[i][j] * mat2[i][j];
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }  
}