#include <iostream>
using namespace std;

int cube(int n) {
	int product = 1;
	for (int i = 1; i <= 3; i++) {
		product = product * n;
	}
	return product;
}

int main() {
	
	int number;
	
	cout << "Enter a number: ";
	cin >> number;
	
	cout << number << " cubed is equal to " << cube(number) << ".\n";
	
	return 0;
}

