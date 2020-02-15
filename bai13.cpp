#include <iostream>

using namespace std;

void input(int array[][20], int n) {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cin >> array[row][col];
        }
    }
}
int main() {
    int A[20][20], B[20][20], sum[20][20];
    int n;
    cin >> n;
    input(A, n);
    input(B, n);
    for (int row = 0; row < n; row++) 
        for (int col = 0; col < n; col++) {
            sum[row][col]= A[row][col] + B[row][col];
    }
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cout << sum[row][col] << " ";
        }
        cout << endl;
    }


}

