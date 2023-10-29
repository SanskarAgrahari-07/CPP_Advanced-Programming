#include<iostream>
using namespace std;
class A {
    public:
    int x,y;
    void getdata() {
        cout<<"Enter the value of x and y"<<endl;
        cin>>x>>y;
    }
};
class B:public A {
    public:
    void pro() {
        cout<<"The product is " << (x*y) <<endl;
    }
};
class C: public A {
    public:
    void sum() {
        cout<<"The sum is " << x+y<<endl;
    }
};
int main() {
    B b1;
    b1.getdata();
    b1.pro();
    C c1;
    c1.getdata();
    c1.sum();
}