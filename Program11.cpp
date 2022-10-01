#include <iostream>
using namespace std;
class Arithmatic
{
public:
    int iNo;

    Arithmatic()
    {
        iNo = 0;
    }

    ~Arithmatic()
    {
    }

    void Display()
    {
        printf("Hello\n");
        printf("Hello\n");
        printf("Hello\n");
        printf("Hello\n");
        printf("Hello\n");
    }
};

int main()
{
    Arithmatic obj;
    obj.Display();

    return 0;
}