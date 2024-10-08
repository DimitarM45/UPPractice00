#include <iostream>

using namespace std;

int main()
{
	int firstNum, secondNum, thirdNum;
	cin >> firstNum;
	cin >> secondNum;
	cin >> thirdNum;

	int largestNum = 0;
	int smallestNum = 0;

	bool isFirstLargest = firstNum >= secondNum && firstNum >= thirdNum;
	bool isSecondLargest = secondNum >= firstNum && secondNum >= thirdNum;

	bool isFirstSmallest = firstNum <= secondNum && firstNum <= thirdNum;
	bool isSecondSmallest = secondNum <= firstNum && secondNum <= thirdNum;

	if (isFirstLargest)
	{
		largestNum = firstNum;

	}
	else if (isSecondLargest)
	{
		largestNum = secondNum;
	}
	else
	{
		largestNum = thirdNum;
	}

	if (isFirstSmallest)
	{
		smallestNum = firstNum;
	}
	else if (isSecondSmallest)
	{
		smallestNum = secondNum;
	}
	else
	{
		smallestNum = thirdNum;
	}

	cout << largestNum << ", " << smallestNum << endl;
}