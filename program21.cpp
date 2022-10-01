#include <iostream>
using namespace std;
class Arithematic
{
public:
    int iNo;

    Arithematic(int A)
    {
        iNo = A;
    }

    ~Arithematic()
    {
    }

    void Display()
    {
        int iCnt = 0;
        if (iNo < 0)
        {
            iNo = -iNo;
        }

        iCnt = 1;
        while (iCnt <= iNo)
        {
            cout << iCnt << endl;
            iCnt++;
        }
    }
};

int main()
{
    int iValue = 0;

    cout << "Enter the number";
    cin >> iValue;

    Arithematic obj(iValue);
    obj.Display();

    return 0;
}