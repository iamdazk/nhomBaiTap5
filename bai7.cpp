#include <iostream> 
#include <string.h>

using namespace std;

void input(char* st) {
	gets_s(st, 1000);
}
int countNumber(char* st) {
	int sum = 0;
	for (int i = 0; i < strlen(st); i++) {
		if (st[i] >= '0' && st[i] <= '9') {
			sum += st[i] - '0';
		}
	}
	return sum;
}
int main() {
	char st[1000] = "";
	input(st);
	cout << countNumber(st);
}