#include <iostream>
using namespace std;
class Arithmatic
{
public:
    float fMarks;

    Arithmatic(float A)
    {
        fMarks = A;
    }
    ~Arithmatic()
    {
    }

    void DisplayClass()
    {
        if ((fMarks > 0.0) && (fMarks < 35.0))
        {
            printf("You are fail\n");
        }
        else if ((fMarks >= 35.0) && (fMarks < 50.0))
        {
            printf("Pass class\n");
        }
        else if ((fMarks >= 50.0) && (fMarks < 60.0))
        {
            printf("Second class\n");
        }
        else if ((fMarks >= 60.0) && (fMarks < 70.0))
        {
            printf("First class\n");
        }
        else if ((fMarks >= 70.0) && (fMarks <= 100.0))
        {
            printf("First class with distinction\n");
        }
        else
        {
            printf("Invalid marks\n");
        }
    }
};

int main()
{
    float fValue = 0.0;

    cout << "Enter the Percentage" << endl;
    cin >> fValue;

    Arithmatic obj(fValue);
    obj.DisplayClass();

    return 0;
}