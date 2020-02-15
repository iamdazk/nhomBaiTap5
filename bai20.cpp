#include <iostream>

using namespace std;

void input(int arr[][20], int &m, int &n) {
    cin >> m >> n;
    for (int row = 0; row < m; row++) {
        for (int col = 0; col < n; col++) {
            cin >> arr[row][col];
        }
    }
}
int maxRow(int arr[][20], int row, int n) {
    int max = arr[row][0];
    int temp = 0;
    for (int i = 0; i < n; i++) {
        if (arr[row][i] > max) {
            max = arr[row][i];
            temp = i;
        }
    }
    return temp;
}
bool minCol(int arr[][20], int row, int col, int m) {
    for (int i = 0; i < m; i++) {
        if (arr[row][col] > arr[i][col]) return 0;
    }
    return 1;
}
void findHorse(int arr[][20], int m, int n) {
    for (int row = 0; row < m; row++) {
        int temp = maxRow(arr, row, n);
       if (minCol(arr, row, temp, m)) cout << row << " " << temp << endl;
    }
}

int main()
{
    int arr[20][20];
    int m, n;
    input(arr, m, n);
    findHorse(arr, m, n);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
