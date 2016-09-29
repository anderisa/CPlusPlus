#include <iostream>
using namespace std;

class Int {
private:
	int integer;
public:
	Int() : integer(0) {
		//initialize integer to 0;
	}
	Int(int i) : integer(i) {
		//initialize integer to i
	}
	void displayInt() {
		cout << integer << endl;
	}

	int addInteger(Int&, Int&) const;
};

int Int::addInteger(Int& i1, Int& i2) const {
	int sum = i1.integer + i2.integer;
	return sum;
}

int main() {
	Int i1{ 4 }, i2{ 7 };
	Int i3;
	i3 = i3.addInteger(i1, i2);
	cout << "Integer 1: "; i1.displayInt();
	cout << "\nInteger 2: "; i2.displayInt();
	cout << "\nInteger 3: "; i3.displayInt();
}