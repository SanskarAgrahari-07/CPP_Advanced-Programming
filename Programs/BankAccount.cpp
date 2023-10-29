#include <iostream>
using namespace std;
class Account
{
    long account_no;
    string name;
    float Balance;
    public:
    void deposit();
    void withdraw();
    void balance();
};
void Account::deposit()
{
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your Account number"<<endl;
    cin>>account_no;
    cout<<"Enter the amount to be deposited"<<endl;
    cin>>Balance;
    cout<<endl;
}
void Account::withdraw()
{
    float money;
    cout<<"Enter the amount you want to withdraw"<<endl;
    cin>>money;
    if(money<=Balance)
    {
    cout <<"Rs."<<money<<" has successively withdrawn from your account"<<endl;
    cout<<"Your current balance is Rs."<<Balance-money<<endl;
    }
    else
    cout<<"You have insufficient balance!!!"<<endl<<endl;
}
void Account::balance()
{
    long acc;
    cout<<"Enter your Account Number"<<endl;
    cin>>acc;
    if(acc==account_no)
    cout<<"Your current balance is Rs."<<Balance<<endl;
    else
    cout<<"Your Account number is incorrect!!"<<endl<<endl;
}
int main()
{
    int n;
    Account n1;
   bool ch = true;
    while(ch) 
    {
        cout<<"Please select from the options"<<endl;
    cout<<"1.Deposit"<<endl<<"2.Withdraw"<<endl<<"3.Balance" << endl << "0 - exit" << endl;
    cin>>n;
    if(n==1)
    n1.deposit();
    else if(n==2)
    n1.withdraw();
    else if(n == 3)
    n1.balance();
    else if(n == 0) 
    {
        cout << "TERMINATED" << endl;
        ch = false;
    }
    }
    return 0;    
}









