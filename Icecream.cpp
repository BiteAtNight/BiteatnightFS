#include<iostream>
using namespace std;
class icecream
{
    public:
int selection(double &totalbill){
     
     int pchoice,pchoice1,quantity, cost7;
     char gotostart;
      char icecream1[]="Vanilla", icecream2[]="Strawberry", icecream3[]="Chocolate";
      icecreamselection:
        cout<<"\n1 "<<icecream1<<" Rs.60"<<"\n";
        cout<<"2 "<<icecream2<<" Rs.50"<<"\n";
        cout<<"3 "<<icecream3<<" Rs.140"<<"\n";
        cout<<"\nPlease Enter the Icecream you would like to have.";
        cin>>pchoice;
        if(pchoice>=1 && pchoice<=3)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(pchoice)
            {
            case 1: cost7 = 60*quantity;
            totalbill+=cost7;
            break;
            case 2: cost7 = 50*quantity;
            totalbill+=cost7;
            break;
            case 3: cost7 = 140*quantity;
            totalbill+=cost7;
            break;
            }
            switch (pchoice)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<icecream1;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night \n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<icecream2;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<icecream3;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
            }
            cout<<"Would you like to order anything else? (Y / N) (y/n):";
            cin>>gotostart;
            if(gotostart=='Y' || gotostart=='y')
            {
              return 1;
            }
            else if(gotostart=='N' || gotostart=='n')
            {
                return 0;
            }
            else if(gotostart!='Y'||gotostart!='y' ||gotostart!='N' ||gotostart!='n')
            {
               cout<<"Select  'y' or 'Y' for yes and 'n' or 'N' for no."<<endl; 
               cin>>gotostart;
                if(gotostart=='Y' || gotostart=='y')
            {
              return 1;
            }
            else if(gotostart=='N' || gotostart=='n')
            {
                return 0;
            }
            }
            }
        else if(pchoice<1 || pchoice>3)
        {
            cout<<"Please enter the icecream given in this list."<<endl;
            goto icecreamselection;
        }
        }
        };