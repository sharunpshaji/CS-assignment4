#include <iostream>
#include <cmath>
using namespace std;

string prime(int number) {
	int numOfDivisors = 0;
	
	for (int i = 1; i <= number; i++) {
		if (number % i == 0) {
			numOfDivisors++;
		}
	}
	
	if (numOfDivisors == 2) {
		return "The number is a prime.";
	}
	else {
		return "The number is not a prime.";
	}
}

string armstrong(int number) {
	int i;
	double n, digit, sum;
	n = 0;
	sum = 0;
	
	i = number;
	
	while (i != 0) {
		n++;
		i = i/10;
	}
	
	i = number;
	
	while (i != 0) {
		digit = i % 10;
		
		sum += pow(digit, n);
		
		i = i/10;
	}
	
	if (sum == number) {
		return "The number is an Armstrong number.";
	}
	
	else {
		return "The number is not an Armstrong number.";
	}
}

string perfect(int number) {
	int divisor, sum;
	sum = 0;

	for (int i = 1; i <= number/2; i++) {
		if (number % i == 0) {
			divisor = i;
			sum += divisor;
		}
	}
	
	if (sum == number) {
		return "The number is a perfect number.";
	}
	
	else {
		return "The number is not a perfect number.";
	}
}

int main() {
	
	int number;
	
	cout << "Enter a number: ";
	cin >> number;
	
	cout << prime(number) << endl << armstrong(number) << endl << perfect(number) << endl;
	
	return 0;
}


