#include <iostream>
using namespace std;

float diameter(float radius) {
	return radius*2;
}

float circumference(float radius) {
	return 2*3.14*radius;
}

float area(float radius) {
	return 3.14*radius*radius;
}

int main() {
	
	float radius;
	
	cout << "Enter the radius of the circle: ";
	cin >> radius;
	
	cout << "The diameter of the circle is " << diameter(radius) << ", its circumference is " << circumference(radius) << " and its area is " << area(radius) << ".\n";
	
	return 0;
}

