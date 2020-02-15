#include <iostream>

using namespace std;

void input(int arr[][20], int n) {
    for (int row = 0; row < n; row++) 
        for (int col = 0; col < n; col++) {
            cin >> arr[row][col];
        }
}
void outScreen(int result) {
    cout << result << endl;
}
void sumRow(int arr[][20], int n) {
    for (int row = 0; row < n; row++) {
        int tempSum = 0;
        for (int col = 0; col < n; col ++) {
            tempSum += arr[row][col];
        }
        outScreen(tempSum);
    }
}
void sumCol(int arr[][20], int n) {
    for (int col = 0; col < n; col++) {
        int tempSum = 0;
        for (int row = 0; row < n; row++) {
            tempSum += arr[row][col];
        }
        outScreen(tempSum);
    }
}
void mainDiagonal(int arr[][20], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
    }
    outScreen(sum);
}
void fillDiagonal(int arr[][20], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i][n - 1 - i];
    }
    outScreen(sum);
}
int main()
{
    int arr[20][20], n;
    cin >> n;
    input(arr, n);
    cout << "col: ";
    sumCol(arr, n);
    cout << "row: ";
    sumRow(arr, n);
    cout << "main: ";
    mainDiagonal(arr, n);
    cout << " filler: ";
    fillDiagonal(arr, n);
}

