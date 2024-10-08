#include <iostream>

using namespace std;

int main()
{
    double num, rangeMin, rangeMax;
    cin >> num;
    cin >> rangeMin;
    cin >> rangeMax;

    cout << boolalpha << (num >= rangeMin && num <= rangeMax);
}