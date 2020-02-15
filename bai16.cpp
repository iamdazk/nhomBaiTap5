#include <iostream>

using namespace std;

void input(int arr[][20], int n) {
    for (int row = 0; row < n; row++)
        for (int col = 0; col < n; col++) {
            cin >> arr[row][col];
        }
}
int findMax(int arr[][20], int n) {
    int max = -99999;
    for (int row = 0; row < n; row++)
        for (int col = 0; col < n; col++) {
            if (arr[row][col] >= max) {
                max = arr[row][col];
            }
        }
    return max;
}
void findAllMax(int arr[][20], int n) {
    int max = findMax(arr, n);
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (arr[row][col] == max) {
                cout << row + 1 << " " << col + 1 << endl;
            }
        }
    }
}
int main() {
    int arr[20][20];
    int n;
    cin >> n;
    input(arr, n);
    findAllMax(arr, n);
}
