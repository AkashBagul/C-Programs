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

    int ChkEven()
    {
        if ((iNo % 2) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    int iValue = 0;
    int iRet;

    printf("Enter the number");
    scanf("%d", &iValue);

    Arithmatic obj(iValue);

    iRet = obj.ChkEven();
    if (iRet == 1)
    {
        printf("%d is even number", iValue);
    }
    else
    {
        printf("%d is odd number", iValue);
    }

    return 0;
}