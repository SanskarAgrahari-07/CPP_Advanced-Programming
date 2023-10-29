#include<iostream>
using namespace std;
class A {
    public:
    int x;
    void getdata() {
        cout<<"Enter the x"<<endl;
        cin>>x;
    }
};
class B:virtual public A {
    public:
    int y;
    void indata() {
        cout<<"Enter the y"<<endl;
        cin>>y;
    }
};
class C:virtual public A {
    public:
    int z;
    void data() {
        cout<<"Enter the z"<<endl;
        cin>>z;
    }
};
class D:public B, public C {
    public:
    void pro() {
        cout<<"The product is "<<x*y*z<<endl;
    }
};
int main() {
    D d1;
    d1.getdata();
    d1.indata();
    d1.data();
    d1.pro();

}