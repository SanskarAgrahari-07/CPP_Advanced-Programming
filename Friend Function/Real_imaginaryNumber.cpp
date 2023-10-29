#include<iostream>
using namespace std;
class class2;
class class1 {
    int real;
    int img;
    public:
    void getdata() {
        cout<<"Enter the real and imaginary number"<<endl;
        cin>>real>>img;
    }
     friend void add(class1 &, class2 &);
};
class class2 {
    int real ;
    int img;
    public:
    void getdata() {
        cout<<"Enter the real and imaginary number"<<endl;
        cin>>real>>img;
    }
    friend void add(class1 &, class2 &);
};
void add(class1 &a, class2 &b) {
    int real = a.real + b.real;
    int img = a.img + b.img;
    cout<<"sum: "<<real<<"+"<<img<<"i"<<endl;
}
int main() {
    class1 c1;
    class2 c2;
    c1.getdata();
    c2.getdata();
    add(c1,c2);
}
