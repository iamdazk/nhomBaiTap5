#include <iostream>

using namespace std;

void input(int arr[][20], int n) {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cin >> arr[row][col];
        }
    }
}
bool maxCol(int arr[][20], int n,int nRow, int nCol) {
    for (int row = 1; row < n; row++) {
        if (arr[row][nCol] > arr[nRow][nCol]) {
            return 0;
        }
    }
    return 1;
}
int maxRow(int arr[][20], int n, int nRow, int nCol) {
    for (int col = 0; col < n; col++) {
        if (arr[nRow][col] > arr[nRow][nCol]) {
            return 0;
        }
    }
    return 1;
}
bool rightDiag(int arr[][20], int n, int nRow, int nCol) {
    /// right top
    int rowT, rowB;
    int colT, colB;
    rowT = rowB = nRow;
    colT = colB = nCol;
    while (rowT >= 0 && colT >= 0) {
        if (arr[rowT][colT] > arr[nRow][nCol])
            return 0;
        rowT--;
        colT--;
    }
    // right bot
    while (rowB < n && colB < n) {
        if (arr[rowB][colB] > arr[nRow][nCol])
            return 0;
        rowB++;
        colB++;
    }
    return 1;

}
bool leftDiag(int arr[][20], int n, int nRow, int nCol) {
    int rowT, rowB;
    int colT, colB;
    // left top
    rowT = rowB = nRow;
    colT = colB = nCol;
    while (rowT >= 0 && colT >= 0) {
        if (arr[rowT][colT] > arr[nRow][nCol])
            return 0;
        rowT--;
        colT++;
    }
    // right bot
    while (rowB < n && colB < n) {
        if (arr[rowB][colB] > arr[nRow][nCol])
            return 0;
        rowB++;
        colB--;
    }
    return 1;
}
void findQueen(int arr[][20], int n) {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (maxRow(arr, n, row, col) && maxCol(arr, n, row, col) && rightDiag(arr, n, row, col) && leftDiag(arr, n, row, col))
                cout << row + 1 << " " << col + 1 << endl;
        }
    }
}
int main() {
    int arr[20][20], n;
    cin >> n;
    input(arr, n);
    findQueen(arr, n);
}

