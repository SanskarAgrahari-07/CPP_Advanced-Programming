// Write a C++ program to count the number of objects created and destroyed and print the same with suitable messages. Use default, parameterized, copy constructor and destructor in the program.

#include <iostream>
using namespace std;

class des
{
    int a, b;
    static int count;
    static int count1;

public:
    des()
    {
        count++;
    }
    des(int x, int y);
    des(des &obj);

    ~des()
    {
        // cout << "object destroyed" << endl;
        count1++;
        // cout << count1;
    }
    static void objcount()
    {
        cout << "Created: " << count << endl;
        cout << "Destroyed: " << count1 << endl;
    }
};

des::des(int x, int y)
{
    a = x;
    b = y;
    count++;
}

des::des(des &obj)
{
    a = obj.a;
    b = obj.b;
    count++;
}

int des::count = 0;
int des::count1 = 0;

int main()
{

    des a;
    des a2(2, 3);
    des a3(a2);

    a.~des();
    // a.objcount();

    a2.~des();
    // a2.objcount();

    a3.~des();
    a3.objcount();

    return 0;
}