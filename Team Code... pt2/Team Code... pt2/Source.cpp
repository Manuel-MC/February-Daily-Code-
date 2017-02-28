#include <iostream>
#include <windows.h>
using namespace std;
int main() {
	double i;
	for ( i = 1; i <= 100000000000;i = i*10) {
		cout <<i<< endl;
		Beep(100000, 3000);
	}
}