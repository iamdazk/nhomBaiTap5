
#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

void inputStr(char* hex) {
	cin >> hex;
}
int convertHextoDec(char* hex) {
	int dec = 0;
	int i = 0; 
	for (int i=0 ; i< strlen(hex); i++) {
		double up = strlen(hex) - i-1;
		if (hex[i] >= 'A') {
			int temp = hex[i] - 'A' + 10;
			dec += temp*pow(16, up);
		}
		else {
			int temp = hex[i] - '0';
			dec += temp*pow(16, up);
		}
	}
	return dec;
}
int main()
{
	char hex[1000];
	inputStr(hex);
	cout << convertHextoDec(hex);
	//cout << (hex[0] - 'A' + 10) * pow(10, strlen(hex) - 0 - 1);
}


