#include<iostream>
using namespace std;
class Mammal {
    public:
    void disp1() {
        cout<<"I am a Mammal."<<endl;
    }
};
class Marine {
    public:
    void disp2() {
        cout<<"I am a Marine Animal."<<endl;
    }
};
class BlueWhale:public Mammal, public Marine {
    public:
    void disp3() {
        cout<<"I belong to both categories."<<endl;
    }
};
int main() {
    BlueWhale b1;
    b1.disp1();
    b1.disp2();
    b1.disp3();
}