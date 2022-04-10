#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;
void deliverymethods();
void review();
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
     paymentmethod:
    string cvv,cvc,cn,dn;
    double cash;
    int method=0;
    cout<<"Please select your payment method\n";
    cout<<"1. Cash on delivery\n";
    cout<<"2. Credit card\n";
    cout<<"3. Debit card\n";
    cin>>method;
    if(method==1)
    {
        cout<<"Total Bill is: "<<totalbill<<"\n";
        cout<<"Cash: ";
        cin>>cash;
        cout<<"Change: "<< cash - totalbill<<"\n\n";
        cout<<"\nYour Payment is successful\n\n";
        deliverymethods();
        cout<<"--------------------------ENJOY YOUR MEAL!-------------------------\n\n\n";
    }
    else if(method==2)
    {
        cout<<"Total Bill is: "<<totalbill<<"\n";
        cout<<"Please Enter your credit card details\n";
        cout<<"Card Holder name: ";
        cin>>name;
        cout<<"Enter your credit card number: ";
        cin>>cn;
        int check=0;
        while (check!=1)
        {
            if(cn.length()<16 || cn.length()>16)
            {
                cout<<"\nPlease Enter valid credit card number\n\n"<<endl;
                cout<<"Enter your credit card number: ";
                cin>>cn;
            }
            else
            check=1;
        }
        cout<<"Enter your CVC: ";
        cin>>cvc;
        check=0;
        while (check!=1)
        {
            if(cvc.length()<3 || cvc.length()>3)
            {
                cout<<"\nPlease Enter valid CVC number\n\n"<<endl;
                cout<<"Enter your CVC: ";
                cin>>cvc;
            }
            else
            check=1;
        }
        cout<<"\nYour Payment is successful\n\n";
        cout<<"--------------------------------ENJOY YOUR MEAL!----------------------------------\n\n\n";
        deliverymethods();
    }
    else if(method==3)
    {
        cout<<"Total Bill is: "<<totalbill<<"\n";
        cout<<"Please Enter your debit card details\n";
        cout<<"Card Holder name: ";
        cin>>name;
        cout<<"Enter your debit card number: ";
        cin>>dn;
        int check=0;
        while (check!=1)
        {
            if(dn.length()<16 || dn.length()>16)
            {
                cout<<"\nPlease Enter valid debit card number\n\n"<<endl;
                cout<<"Enter your debit card number: ";
                cin>>dn;
            }
            else
            check=1;
        }
        cout<<"Enter your CVV: ";
        cin>>cvv;
        check=0;
        while (check!=1)
        {
            if(cvv.length()<3 || cvv.length()>3)
            {
                cout<<"\nPlease Enter valid CVV number\n\n";
                cout<<"Enter your CVV: ";
                cin>>cvv;
            }
            else
            check=1;
        }
        cout<<"\nYour Payment is successful\n\n";
        cout<<"-------------------------------------ENJOY YOUR MEAL!-----------------------------------\n\n\n";
        deliverymethods();
    }
    else if(method < 1 || method > 3)
        {
            cout<<"\nPlease select valid payment method\n\n";
            goto paymentmethod;
        }
    cout<<" " <<name<<",Thank you for the payment.\n\n";
    review();
    }
};

void review()
{
    int ch;
    char cmt;
    starting:
    cout<<"\t\tYour opinion is very important to us. Please take 5 minutes to fill this card it helps us to improve and serve better as per your taste."<<endl;
    cout<<"\t\t1) Ok  2) Skip"<<endl;
    cin>>ch;
   switch(ch)
   {
       case 1:
       ch==1;
       goto Feedback;
        case 2:
        ch==2;
        goto conclusion;
        default :
        cout<<"Please enter '1' to continue and '2' to skip."<<endl;
        goto starting;
   }
    Feedback:
    cout<<"Please select the appropriate options below: "<<endl;
    statement1:
    cout<<"The menu board was easy to read.\n1)Yes 2)No"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        ch==1;
        goto statement2;
        case 2:
        ch==2;
        goto statement2;
        default :
        cout<<"Please enter '1' for yes and '2' for no."<<endl;
        goto statement1;
    }
    statement2:
    cout<<"\nThe payment's section is quite comfortable.\n1)Yes 2)No"<<endl;
    cin>>ch;
    switch(ch)
    {
        case 1:
        ch==1;
        goto statement3;
        case 2:
        ch==2;
        goto statement3;
        default :
        cout<<"Please enter '1' for yes and '2' for no."<<endl;
        goto statement2;
    }
    statement3:
    cout<<"\nThe prices are reasonable.\n1)Yes 2)No"<<endl;
    cin>>ch;
     switch(ch)
    {
        case 1:
        ch==1;
        goto statement4;
        case 2:
        ch==2;
        goto statement4;
        default :
        cout<<"Please enter '1' for yes and '2' for no."<<endl;
        goto statement3;
    }
    statement4:
    cout<<"\nAny other comments or suggestions:"<<endl;
    cin>>cmt;
    cout<<"\nThank you so much for your valuable feedback."<<endl;
    conclusion:
    cout<<"            - - - - - - -    THANK YOU SO MUCH    - - - - - - - -                  "<<endl;
    cout<<"***************************    BITE-AT-NIGHT    *****************************"<<endl;

}
void deliverymethods()
{
    {
    int p;
    string c;
    starting:
    cout<<"Select your order method"<<endl;
    cout<<"1)Pick Up   2) Home delivery  "<<endl;
    cin>>p;
   switch(p)
   {
       case 1:
       p==1;
       goto Pickup;
       break;
        case 2:
        p==2;
        goto Homedelivery;
        break;
        default :
        cout<<"Please enter '1' to Pick up and '2' to Home Delivery."<<endl;
        goto starting;
        break;
   }
    Homedelivery:
    cout<<"\n Enter your Address"<<endl;
    cin>>c;
    cout<<"\n Your order will be delivered in 40 min."<<endl;
    Pickup:
    cout<<"your order will be ready in 40 min. "<<endl;


 }
}
