/*
	JonLuke R. Ogayonne
	CIS 1202 501
	May 03, 2021
*/
#include<iostream>
using namespace std;
// Template for half function.
template <class T>
// Function to return half the value.
T half(T halfNum) {
	return (halfNum / 2);
}
// Function to return half the integer value.
int half(int halfNum) {
	return round(static_cast<double>(halfNum) / 2);
}
// Program starts at main.
int main() {
	// Floats and integers for the main. 
	double a = 7.0;
	float b = 5.0f;
	int c = 3;
	// display each value in half.
	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;
	// Terminate program.
	return 0;
}