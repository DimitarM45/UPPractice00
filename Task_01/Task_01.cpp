#include <iostream>

using namespace std;

int main()
{
	int number;
	cin >> number;

	short firstDigit, secondDigit, thirdDigit;

	thirdDigit = number % 10;
	number /= 10;

	secondDigit = number % 10;
	number /= 10;

	firstDigit = number % 10;

	cout << "first digit: " << firstDigit << endl;
	cout << "second digit: " << secondDigit << endl;
	cout << "third digit: " << thirdDigit << endl;
}