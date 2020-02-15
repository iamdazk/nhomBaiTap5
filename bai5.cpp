#include <iostream>
#include <string.h>

using namespace std;

void input(char* uStr) {
	gets_s(uStr, 1000);
	uStr += '\0';
}
void delElement(char* st, int pos) {
	for (int i = pos; i < strlen(st); i++) {
		st[i - 1] = st[i];
	}
	st[strlen(st) - 1] = '\0';
}
void headerString(char* st) {
	while (st[0] == ' ') {
		delElement(st, 1);
	}
	
}
void footerString(char* st) {
	while (st[strlen(st) - 1] == ' ') {
		st[strlen(st) - 1] = '\0';
	}
}
void standarString(char* st) {
	int i = 0;
	while (i < strlen(st)-1) {
		while (st[i] == ' ' && st[i + 1] == ' ') {
			delElement(st, i+1);
		}
		i++;
	}
}
int main() {

	char uStr[1000] = "";
	input(uStr);
	headerString(uStr);
	footerString(uStr);
	standarString(uStr);
	cout << uStr;

	
}