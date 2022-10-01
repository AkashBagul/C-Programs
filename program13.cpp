#include <iostream>
using namespace std;
class Arithmatic
{
public:
    int iNo;

    Arithmatic()
    {
        int iNo = 0;
    }

    ~Arithmatic()
    {
    }

    void Display() // Defination
    {
        int iCnt = 0;

        // 1 Initialzation
        // 2 Condition
        // 3 Displacement
        // 4 Loop body

        //          1           2               3
        for (iCnt = 1; iCnt <= 5; iCnt++)
        {
            printf("Hello\n"); //  4
        }
    }
};

int main()
{
    Arithmatic obj;
    obj.Display();

    return 0;
}
