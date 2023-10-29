#include<iostream>
using namespace std;
class check {
   public:
   void member(base &a);
};
class base {
    private:
    int x;
    protected:
    int y;
    public:
    base(int v1, int v2) {
        x = v1;
        y = v2;
    }
    friend void check::member(base &);

    int getx() {
        return x;
    }
};
void check::member(base &a) {
        cout<<"The private value is "<<a.getx()<<endl;
        cout<<"The protected value is "<<a.y<<endl;
    };
int main() {
    base b1(20,30);
    check c1;
    c1.member(b1);

}