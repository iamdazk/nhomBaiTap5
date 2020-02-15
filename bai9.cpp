#include <iostream>
#include <string.h>

using namespace std;

void input(char* st, char* sub) {
    gets_s(st, 1000);
    gets_s(sub, 100);
}
void subInString(char *st, char* sub) {
    char* flag;
    flag = strstr(st, sub);
    if (flag == NULL) cout << " no !";
    else cout << "Yes";
}
int main()
{
    char st[1000] = "", sub[1000] = "";
    input(st, sub);
    subInString(st, sub);
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
