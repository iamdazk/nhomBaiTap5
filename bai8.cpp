#include <iostream>
#include <string.h>

using namespace std;

void input(int &n, int &pos) {
    cout << " input pos :"; cin >> pos;
    cout << "how n element: "; cin >> n;
    cout << "string: ";
    
}
void outElement(char* st, int& n, int& pos) {
    for (int i = pos - 1; i < pos + n; i++) {
        cout << st[i];
    }
    cout << endl;
    for (int i = pos - n - 1; i < pos; i++) {
        cout << st[i];
    }
}
int main()
{
    char st[1000] = "";
    int n, pos;
    input(n, pos);
    cin >> st;
    outElement(st, n, pos);
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
