#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;
class Payment
{
    public:
    void makePayment( double totalbill)
    {
        string name;
        cout<<fixed<<setprecision(2);
        cout<<"Enter your name:"<<endl;
        cin>>name;
    cout<<" Total amount:"<<totalbill<<endl;
    cout<<" " <<name<<",Thank you for the payment.";
    }
};
