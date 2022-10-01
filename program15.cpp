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
        for (iCnt = 0; iCnt < iNo; iCnt++)
        {
            cout << "Hello" << endl;
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