#include <iostream>
using namespace std;

string evenOrOdd(int a) {
	
	if (a % 2 == 0) {
		return "The number is even.";
	}
	else {
		return "The number is odd.";
	}
}

int main() {
	
	int firstNumber;
	
	cout << "Enter a number: ";
	cin >> firstNumber;
	
	cout << evenOrOdd(firstNumber);
	cout << endl;
	
	return 0;
}
