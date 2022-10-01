#include <iostream>
using namespace std;

int Addition(int iValue1, int iValue2)
{
    int iAns = 0;
    iAns = iValue1 + iValue2;
    return iAns;
}

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iNo3 = 0;

    cout << "Enter first number";
    cin >> iNo1;

    cout << "Enter second number";
    cin >> iNo2;

    iNo3 = Addition(iNo1, iNo2);
    cout << "Additon is :" << iNo3;

    return 0;
}