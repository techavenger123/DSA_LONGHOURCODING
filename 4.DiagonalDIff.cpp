#include<bits/stdc++.h>
using namespace std;
int diagonalDifference(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int primaryDiagonalSum = 0, secondaryDiagonalSum = 0;
    for (int i = 0; i < n; ++i) {
        primaryDiagonalSum += matrix[i][i];
        secondaryDiagonalSum += matrix[i][n-i-1];
    }
    return abs(primaryDiagonalSum - secondaryDiagonalSum);
}
int main() {
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    cout << diagonalDifference(matrix) << endl;
    return 0;
}