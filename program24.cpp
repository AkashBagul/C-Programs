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

    bool Check()
    {
        if (
            ((iNo % 3) == 0) &&
            ((iNo % 5) == 0))
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

    bRet = obj.Check();
    if (bRet == true)
    {
        printf("%d is divisible by 3 & 5\n", iValue);
    }
    else
    {
        printf("%d is Not divisible by 3 & 5\n", iValue);
    }

    return 0;
}