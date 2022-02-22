#include<iostream>
using namespace std;
class biryani
{
    public:
int selection(double &totalbill){
     
     int pchoice,pchoice1,quantity, cost5;
     char gotostart;
      char bir1[]="Hyderabadi Biryani", bir2[]="Pot Biryani", bir3[]="Bamboo Biryani" ,bir4[]="Fish Biryani" ,bir5[]="Bombay Borough’s Royal Gold Biryani" ,bir6[]="Prawns Biryani";
biryaniselection:
        cout<<"\n1 "<<bir1<<" Rs.160"<<"\n";
        cout<<"2 "<<bir2<<" Rs.220"<<"\n";
        cout<<"3 "<<bir3<<" Rs.140"<<"\n";
        cout<<"4 "<<bir4<<" Rs.170"<<"\n";
        cout<<"5 "<<bir5<<" Rs.1999"<<"\n";
        cout<<"6 "<<bir6<<" Rs.149"<<"\n";
        cout<<"\nPlease Enter the Biryani you would like to have?:";
        cin>>pchoice;
        if(pchoice>=1 && pchoice<=6)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(pchoice)
            {
            case 1: cost5 = 160*quantity;
            totalbill+=cost5;
            break;
            case 2: cost5 = 220*quantity;
            totalbill+=cost5;
            break;
            case 3: cost5 = 140*quantity;
            totalbill+=cost5;
            break;
            case 4: cost5 = 170*quantity;
            totalbill+=cost5;
            break;
            case 5: cost5 = 1999*quantity;
            totalbill+=cost5;
            break;
            case 6: cost5 = 149*quantity;
            totalbill+=cost5;
            break;
            }
            switch (pchoice)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bir1;
             cout<<"\nYour Bill is "<<cost5<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night \n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<bir2;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bir3;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 4:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bir4;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 5:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bir5;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 6:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bir6;
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
                cout<<"Please select the Biryani from the given list."<<endl;
                goto biryaniselection;
        }
        }
        };
                
                
                
                
                
    