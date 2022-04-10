#include<iostream>
using namespace std;
class cake
{
    public:
int selection(double &totalbill){
     
     int pchoice,pchoice1,quantity, cost8;
     char gotostart;
char cake1[]="Black Forest" , cake2[]="Pineapple", cake3[]="Dark Chocolate";

 cakeselection:
        cout<<"\n1 "<<cake1<<" Rs.360"<<"\n";
        cout<<"2 "<<cake2<<" Rs.550"<<"\n";
        cout<<"3 "<<cake3<<" Rs.440"<<"\n";
        cout<<"\nPlease Enter which cake you would like to have?:";
        cin>>pchoice;
        if(pchoice>=1 && pchoice<=3)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(pchoice)
            {
            case 1: cost8 = 360*quantity;
            totalbill+=cost8;
            break;
            case 2: cost8 = 550*quantity;
            totalbill+=cost8;
            break;
            case 3: cost8 = 440*quantity;
            totalbill+=cost8;
            break;
            }
            switch (pchoice)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<cake1;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night \n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<cake2;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<cake3;
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
            cout<<"Please select the cake given in this list."<<endl;
            goto cakeselection;
        }
        }
        };