#include <iostream>
#include <string.h> 

using namespace std;

void input(char* st) {
	gets_s(st, 1000);
}
void revString(char* st, char* rev) {
	rev[0] = '\0';
	int i = strlen(st) - 1;
	while (i >= 0)
	{
		while (i >= 0 && st[i] == 32)
		{
			strcat_s(rev, 1000, " ");
			i--;
		}
		char word[100] = "";
		int nTam = 0;
		while (i >= 0 && st[i] != 32)
		{
			word[nTam++] = st[i];
			i--;
		}
		word[nTam] = '\0';
		_strrev(word);
		strcat_s(rev,100, word);
	}
}
int main() {
	char st[1000] = "", rev[1000] = "";
	input(st);
	revString(st, rev);
	cout << rev;
}