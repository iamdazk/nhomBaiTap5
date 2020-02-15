#include <iostream>

using namespace std;

void input(int arr[][20], int n) {
    for (int row = 0; row < n; row++) 
        for (int col = 0; col < n; col++) {
            cin >> arr[row][col];
        }
}
void output(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
void sortDiagonal(int arr[][20], int n) {
    int mainDiag[20];
    for (int i = 0; i < n; i++) {
        mainDiag[i] = arr[i][i];
    }
    //bubble sort 
    bool haveSwap = false;
    for (int i = 0; i < n - 1; i++) {
        haveSwap = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (mainDiag[j] > mainDiag[j + 1]) {
                swap(mainDiag[j], mainDiag[j + 1]);
                haveSwap = true; 
            }
        }
        if (haveSwap == false) {
            break;
        }
    }
    output(mainDiag, n);
}

int main() {
    int arr[20][20];
    int n;
    cin >> n;
    input(arr, n);
    sortDiagonal(arr, n);
    
}

