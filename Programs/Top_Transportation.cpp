#include<iostream>
using namespace std;
class Travel
{
    string name;
    string address;
    int age;
    int SelectedRoute;
    int SelectedType;
    
public:
    void getdata();
    int route();
    int type();
    float price();
    float ag();
    void putdata();
};
void Travel::getdata()
{
    cout<<" Enter your name"<<endl;
    cin>>name;
    cout<<" Enter your address"<<endl;
    cin>>address;
    cout<<" Enter your age"<<endl;
    cin>>age;
    SelectedRoute = route();
    SelectedType = type();
}
int Travel::route()
{
    int n;
    cout<<"Select one from the options below.."<<endl;
    cout<<" 1.Paris to Washington"<<endl;
    cout<<" 2.Paris to New Jersey"<<endl;
    cout<<" 3.Paris to Miami"<<endl;
    cin>>n;
    return n;
}
int Travel::type()
{
    int c;
    cout<<"Select the type of class you want to travel"<<endl;
    cout<<" 1.Business Class"<<endl<<" 2.Economy Class"<<endl;
    cin>>c;
    return c;
}
float Travel::price()
{
    float a = SelectedRoute;
    float b = SelectedType;
    float a1=400, a2=500, a3=450;
    if(a==1 && b==1)
        return a1;
     else if(a==1 && b==2)
         return a1+(0.23*a1) ;
    else if(a==2 && b==1)
        return a2;
     else if(a==2 && b==2)
         return a2+(0.23*a2);
     else if(a==3 && b==1)
        return a3;
     else if(a==3 && b==2)
         return a3+(0.23*a3);
} 
float Travel::ag()
{
        float p=price();
        if(age<4)
            return  p-(0.5*p) ;
        else if(age>=4 && age<=15)
            return p-(0.25*p);
        else if(age>15)
             return p-(0.1*p);
}
void Travel::putdata()
{
    cout << "   Top Transportation Co.   " << endl;
    cout << " Name = " << name << endl << " Address = " << address << endl << " Age = " << age << " years" << endl;
    cout << " Selected route: ";
    switch (SelectedRoute)
    {
        case 1:
            cout << "Paris to Washington";
            break;
        case 2:
            cout << "Paris to New Jersey";
            break;
        case 3:
            cout << "Paris to Miami";
            break;
        default:
            cout << "Invalid route";
    }
    cout << endl;
    cout << " Selected class: ";
    switch (SelectedType)
    {
        case 1:
            cout << "Business Class";
            break;
        case 2:
            cout << "Economy Class";
            break;
        default:
            cout << "Invalid class";
    }
    cout << endl;
    float p = ag();
    cout << " The total Price of your flight is $" << p << endl;
}

int main()
{
    Travel t1;
    t1.getdata();
    t1.putdata();
    return 0;
}








