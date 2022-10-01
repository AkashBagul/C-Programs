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

    bool ChkEven()
    {
        if ((iNo % 2) == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter the number");
    scanf("%d", &iValue);

    Arithmatic obj(iValue);

    bRet = obj.ChkEven();
    if (bRet == true)
    {
        printf("%d is even number", iValue);
    }
    else
    {
        printf("%d is odd number", iValue);
    }

    return 0;
}