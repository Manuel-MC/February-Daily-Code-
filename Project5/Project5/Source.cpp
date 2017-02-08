#include <iostream>
using namespace std;
int main() {
	double num1;
	double num2;
	double sum;
	cout << "What is the radius?" << endl;
	cin >> num1;
	cout << "What is the height?" << endl;
	cin >> num2;
	sum = 3.14*num1*num1*num2 / 3;
	cout << "The area is " << sum << endl;
}