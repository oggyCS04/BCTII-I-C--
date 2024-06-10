#include <iostream>
using namespace std;

class complex
{
    int real;
    float img;

public:
    complex()
    {
        real = 0;
        img = 0;
    }

    const int displayReal()
    {
        cout << "Enter real part: ";
        cin >> real;
        return real;
    }

    float displayImg()
    {
        cout << "Enter imaginary part: ";
        cin >> img;
        return img;
    }
    const void lastAns()
    {
        real = displayReal();
        img = displayImg();
        cout << real << "+i" << img << endl;
    }
};

int main()
{
    complex c;
    c.lastAns();
    return 0;
}