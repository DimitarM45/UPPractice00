#include <iostream>

using namespace std;

int main()
{ 
	// First solution (temp variable)

	/*int firstNum, secondNum;
	cin >> firstNum;
	cin >> secondNum;

	int tempNum = secondNum;
	secondNum = firstNum;
	firstNum = tempNum;

	cout << "a = " << firstNum << endl;
	cout << "b = " << secondNum << endl;*/

	// Second solution (math solution)

	int firstNum, secondNum;
	cin >> firstNum;
	cin >> secondNum;

	firstNum = firstNum + secondNum;
	secondNum = firstNum - secondNum;
	firstNum = firstNum - secondNum;

	cout << "a = " << firstNum << endl;
	cout << "b = " << secondNum << endl;
}