#include <iostream>

using namespace std;

int main()
{
	short firstNum, secondNum;
	cin >> firstNum;
	cin >> secondNum;

	int product = firstNum * secondNum;

	int productLastDigit = product % 10;

	cout << product << ", " << productLastDigit << " - " << (productLastDigit % 2 == 0);
}