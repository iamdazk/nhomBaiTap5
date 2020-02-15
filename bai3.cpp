
#include <iostream>
#include <string.h>

using namespace std;

void input(char* str) {
	gets_s(str, 1000);
	str += '\0';
}

int main() {
	char st[1000];
	input(st);
	cout << _strrev(st);
}

