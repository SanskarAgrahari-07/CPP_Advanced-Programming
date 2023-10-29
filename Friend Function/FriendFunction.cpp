#include<iostream>
using namespace std;

class check;
class another {
	public:
	void member(check &);
};
class check {
	private:
	int var1;
	protected:
	int var2;
	public:
	check(int v1, int v2) {
		var1 = v1;
		var2 = v2;
	}
	friend void another::member(check &);
};
class another {
	public:
	void member(check &m) {
		cout<<"The private member is "<<m.var1<<endl;
		cout<<"The protected member is "<<m.var2<<endl;
		}
};
int main()
{
	check c1(20,28);
	another a1;
	a1.member(c1);
}
