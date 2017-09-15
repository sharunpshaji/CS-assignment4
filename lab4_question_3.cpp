#include <iostream>
using namespace std;

string max(int a, int b) {
	if (a > b) {
		return "The first number is greater than the second one.";
	}
	else if (a < b) {
		return "The second number is greater than the first one.";
	}
	else {
		return "Both the numbers are equal.";
	}
}

int main() {
	
	int firstNumber, secondNumber;
	
	cout << "Enter a number: ";
	cin >> firstNumber;
	
	cout << "Enter another number: ";
	cin >> secondNumber;
	
	cout << max(firstNumber, secondNumber);
	cout << endl;
	
	return 0;
}

