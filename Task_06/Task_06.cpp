#include <iostream>

using namespace std;

int main()
{
	int firstNum, secondNum, thirdNum;
	cin >> firstNum;
	cin >> secondNum;
	cin >> thirdNum;

	int largestNum = firstNum;

	if (secondNum > largestNum)
	{
		largestNum = secondNum;
	}

	if (thirdNum > largestNum)
	{
		largestNum = thirdNum;
	}

	int smallestNum = firstNum;

	if (secondNum < smallestNum)
	{
		smallestNum = secondNum;
	}

	if (thirdNum < smallestNum)
	{
		smallestNum = thirdNum;
	}

	cout << largestNum << ", " << smallestNum << endl;
}