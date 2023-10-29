#include<iostream>
using namespace std;
class Message {
    int x;
    public:
    Message() {
        cout<<"Null Meaasge"<<endl;
    }
    Message(int a) {
        cout<<"Copy message"<<endl;
    }
    Message(const Message &m) {
        cout<<"Copy message"<<endl;
    }
    void send(Message m1) {
        cout<<"Send message"<<endl;
    }
    Message receive(Message &t) {
        Message temp(10);
        cout<<"receive message"<<endl;
        return t;
    }
    ~Message() {
        cout<<"Destroy message"<<endl;
    }
};
int main() {
    Message t1;
    Message t2 = t1;
    Message t3;
    t3 = t2;
    t1.send(t2);
    t2 = t1.receive(t3);
}
