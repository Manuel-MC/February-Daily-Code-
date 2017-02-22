#include <iostream>
using namespace std;
int  main() {
	char input;
	double num1;
	double num2;
	double sum;
	cout <<"Do you want to add(a), subtract(s), multiply(m), or divide(d)?" << endl;
	cin >> input;
	if (input =='a') {
		cout << "Choose two numbers" << endl;
		cin >> num1;
		cin >> num2;
		sum = num1 + num2;
		cout << "Your calculation is " << sum << endl;
	}
	else if (input == 's') {
		cout << "Choose two numbers" << endl;
		cin >> num1;
		cin >> num2;
		sum = num1 - num2;
		cout << "Your calculation is " << sum << endl;
	}
	else if (input == 'm') {
		cout << "Choose two numbers" << endl;
		cin >> num1;
		cin >> num2;
		sum = num1 * num2;
		cout << "Your calculation is " << sum << endl;
	}
	else if (input =='d') {
		cout << "Choose two numbers" << endl;
		cin >> num1;
		cin >> num2;
		sum = num1 / num2;
		cout << "Your calculation is " << sum << endl;
	}

}