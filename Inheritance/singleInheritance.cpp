#include<iostream>
using namespace std;
class base {
    public:
    int x;
    void getdata() {
        cout<<"Enter the value of x"<<endl;
        cin>>x;
    }
};
class derive: public base {
    private:
    int y;
    public:
    void getdata() {
        cout<<"Enter the value of y"<<endl;
        cin>>y;
    }
    void add() {
        cout<<"The product is " << x*y<<endl;
    }
};
int main() {
    base b1;
    b1.getdata();
    derive d1;
    d1.getdata();
    d1.add();
}