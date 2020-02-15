
#include <iostream>
#include <string.h>

using namespace std;

void input(int &dec) {
	cout << "input a number ";
	cin >> dec;
}
void convertDecToBin(int dec, char bin[]) {
	int i = 0;
	bin[0] = '\0';
	while (dec > 0) {
		int temp = dec % 2;
		dec /= 2;
		bin[i] = temp + '0';
		i++;
	}
	bin += '\0';
	_strrev(bin);
}
void convertDecToOct(int dec, char* oct) {
	int i = 0;
	while (dec > 0) {
		int temp = dec % 8;
		dec /= 8;
		oct[i] = temp + '0';
		i++;
	}
	oct += '\0';
	_strrev(oct);
}
void convertDecToHex(int dec, char* hex) {
	int i = 0;
	while (dec > 0) {
		int temp = dec % 16;
		dec /= 16;
		if (temp < 10) {
			hex[i] = temp + '0';
		}
		else {
			hex[i] = temp + 'A' - 10;
		}
		i++;
	}
	hex += '\0';
	_strrev(hex);
}
void output(char* result) {
	cout << result<<endl;
}
int main() {
	int dec;
	input(dec);
	char bin[100]="", hex[1000]="", oct[1000]="";
	convertDecToBin(dec,bin);
	convertDecToHex(dec,hex);
	convertDecToOct(dec,oct);
	output(bin);
	output(hex);
	output(oct);
    
}