#include <iostream>

using namespace std;

void input(int arr[][20], int n) {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cin >> arr[row][col];
        }
    }
}
bool isPositive(int n) {
    if (n % 2 == 0 && n > 0) return 1;
    else return 0;
}
void checkAngle(int arr[][20], int n) {
    if (isPositive(arr[0][0])) { 
        cout << 0 + 1 << " " << 0 + 1 << endl;
        arr[0][0] = 0;
    }
    if (isPositive(arr[n - 1][n - 1])) {
        cout << n - 1 + 1 << " " << n - 1 + 1 << endl;
        arr[n - 1][n - 1] = 0;
    }
    if (isPositive(arr[0][n - 1])) {
        cout << 0 + 1 << " " << n - 1 + 1 << endl;
        arr[0][n - 1] = 0;
    }

    if (isPositive(arr[n - 1][0])) {
        cout << n << " " << 0 + 1<< endl;
        arr[n - 1][0] = 0;
    }
}

void findPositive(int arr[][20], int n) {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            bool isEdge = row == 0 || row == n - 1;
            if (isEdge && isPositive(arr[row][col])) {
                cout << row << " " << col << endl;
            }
        }
    }
    for (int col = 0; col < n; col++) {
        for (int row = 0; row < n; row++) {
            bool isEdge = col == 0 || col == n - 1;
            if (isEdge && isPositive(arr[row][col])) {
                cout << row << " " << col << endl;
            }
        }
    }
}
int main() {
    int arr[20][20];
    int n;
    cin >> n;
    input(arr, n);
    if (n < 3) checkAngle(arr, n);
    else {
        checkAngle(arr, n);
        findPositive(arr, n);
    }
}

