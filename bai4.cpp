
#include <iostream>
#include<string.h>
using namespace std;

void input(char* st) {
	gets_s(st, 1000);
	st += '\0';
}
int countWord(char* st) {
	int count = 0;
	int i = 0;
	while (i < strlen(st)) {
		while (st[i] != ' ') {
			i++;
		}
		count++;
		i++;
	}
	return count;
}
int main() {
	char st[1000] = "";
	input(st);
	cout << countWord(st);
    
}

