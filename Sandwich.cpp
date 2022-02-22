#include<iostream>
using namespace std;
class sandwich
{
    public:
int selection(double &totalbill){
     
     int pchoice,pchoice1,quantity, cost6;
     char gotostart;
     char sand1[]="Corn Sandwich", sand2[]="Paneer Sandwich", sand3[]="Cheese Sandwich", sand4[]="Special Sandwich", sand5[]="Nutelle Sandwich", sand6[]="Seafood Sandwich";
      sandwichselection:
        cout<<"\n1  "<<sand1<<" Rs.240"<<"\n";
        cout<<"2  "<<sand2<<" Rs.160"<<"\n";
        cout<<"3  "<<sand3<<" Rs.100"<<"\n";
        cout<<"4  "<<sand4<<" Rs.180"<<"\n";
        cout<<"5  "<<sand5<<" Rs.149"<<"\n";
        cout<<"6  "<<sand6<<" Rs.199"<<"\n";
        cout<<"\nPlease enter the Sandwich you would like to have.";
        cin>>pchoice;
        if(pchoice>=1 && pchoice<=6)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(pchoice)
            {
            case 1: cost6 = 240*quantity;
            totalbill+=cost6;
            break;
            case 2: cost6 = 160*quantity;
            totalbill+=cost6;
            break;
            case 3: cost6 = 100*quantity;
            totalbill+=cost6;
            break;
            case 4: cost6 = 180*quantity;
            totalbill+=cost6;
            break;
            case 5: cost6 = 149*quantity;
            totalbill+=cost6;
            break;
            case 6: cost6 = 199*quantity;
            totalbill+=cost6;
            break;
            }
            switch (pchoice)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<sand1;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<sand2;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<sand3;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
              case 4:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<sand4;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
              case 5:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<sand5;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
              case 6:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<sand6;
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
        else if(pchoice<1 || pchoice>6)
        {
            cout<<"Please enter the sandwich from this given list."<<endl;
            goto sandwichselection;
        }
        }
        };