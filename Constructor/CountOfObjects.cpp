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
    des(int x, int y)
    {
    a = x;
    b = y;
    count++;
}
    des(des &obj)
    {
    a = obj.a;
    b = obj.b;
    count++;
}

    ~des()
    {
  
        count1++;
        
    }
    static void objcount()
    {
        cout << "Created: " << count << endl;
        cout << "Destroyed: " << count1 << endl;
    }
};
int des::count = 0;
int des::count1 = 0;

int main()
{

    des a;
    des a2(2, 3);
    des a3(a2);

    a.~des();

    a2.~des();

    a3.~des();
    a3.objcount();

    return 0;
}
