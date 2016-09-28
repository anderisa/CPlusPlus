#include <iostream>
using namespace std;

void swap(int&, int&);

int main() {
	int num1, num2;
	num1 = 12;
	num2 = 13;
	cout << "Number 1 is: " << num1 << endl;
	cout << "Number 2 is: " << num2 << endl;

	swap(num1, num2);

	cout << "\nNumber 1 is: " << num1 << endl;
	cout << "Number 2 is: " << num2 << endl;

	return 0;
}

void swap(int& num1, int& num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}