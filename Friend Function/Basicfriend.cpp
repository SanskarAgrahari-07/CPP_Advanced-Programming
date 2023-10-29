#include<iostream>
using namespace std;

class class2;
class class1 {
    int val1;
    public:
    void getdata(int a) {
        val1 = a;
    }
    void disp(void) {
        cout<<"The value is "<<val1<<endl;
    }
    friend void swap(class1 &, class2 &);
};
class class2 {
    int val2;
    public:
    void getdata(int b) {
        val2 = b;
    }
    void disp(void) {
        cout<<"The value is "<<val2<<endl;
    }
    friend void swap(class1 &, class2 &);
};
void swap(class1 &x, class2 &y) {
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp; 
}
int main() {
    class1 c1;
    class2 c2;
    c1.getdata(10);
    c2.getdata(20);
     cout<<"Before swapping:"<<endl;
    c1.disp();
    c2.disp();
    cout<<"After swapping:"<<endl;
    swap(c1,c2);
    c1.disp();
    c2.disp();

}