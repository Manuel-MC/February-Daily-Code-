#include <iostream>
#include <Windows.h>
using namespace std;

void printmessage()
{
	for (int i = 1; i <= 100000000000; i++) {
		Beep(100000, 900);
		cout << "Trash" << endl;
		Beep(10000, 900);
		system("Color A5");
		Beep(1000, 900);
		system("Color A7");
		Beep(100, 900);
		system("Color C9");
	}
}

int main()
{
	printmessage();
}