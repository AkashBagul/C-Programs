#include <iostream>
using namespace std;
class Arithmatic
{
public:
    int iNo;

    Arithmatic(int A)
    {
        iNo = A;
    }
    ~Arithmatic()
    {
    }

    int Summation()
    {
        int iSum = 0;
        int iCnt = 0;

        if (iNo < 0)
        {
            iNo = -iNo;
        }
        //          1               2           3
        for (iCnt = 1; iCnt <= iNo; iCnt++)
        {
            iSum = iSum + iCnt; // 4
        }
        return iSum;
    }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout << "Enter the number" << endl;
    cin >> iValue;

    Arithmatic obj(iValue);

    iRet = obj.Summation();

    cout << "Addition is :" << iRet;

    return 0;
}