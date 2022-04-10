#include<iostream>
using namespace std;
class burger
{
    public:
int selection(double &totalbill){
     
     int pchoice,pchoice1,quantity, cost4;
     char gotostart;
     char bur1[]="Chicken Burger",bur2[]="Turkey Burger",bur3[]="Portobello Mushroom Burger" ,bur4[]="Veggie Burger" ,bur5[]="Bision Burger" ,bur6[]="Elk Burger";
     burgerselection:
        cout<<"\n1 "<<bur1<<" Rs.180"<<"\n";
        cout<<"2 "<<bur2<<" Rs.150"<<"\n";
        cout<<"3 "<<bur3<<" Rs.160"<<"\n";
        cout<<"4 "<<bur4<<" Rs.170"<<"\n";
         cout<<"5 "<<bur5<<" Rs.180"<<"\n";
          cout<<"6 "<<bur6<<" Rs.100"<<"\n";
        cout<<"\nPlease Enter the Burger you would like to have?: ";
        cin>>pchoice;
        if(pchoice>=1 && pchoice<=6)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(pchoice)
            {
            case 1: cost4 = 180*quantity;
            totalbill+=cost4;
            break;
            case 2: cost4 = 150*quantity;
            totalbill+=cost4;
            break;
            case 3: cost4 = 160*quantity;
            totalbill+=cost4;
            break;
            case 4: cost4 = 170*quantity;
            totalbill+=cost4;
            break;
            case 5: cost4 = 180*quantity;
            totalbill+=cost4;
            break;
            case 6: cost4 = 100*quantity;
            totalbill+=cost4;
            break;
            }
            switch (pchoice)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bur1;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night \n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<bur2;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night \n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bur3;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
              case 4:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bur4;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
              case 5:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bur5;
             cout<<"\nYour Total Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
              case 6:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<bur6;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
            }
              cout<<"Would you like to order anything else? (Y / N) (y/n):\n";
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
            cout<<"Please select the burger from this given list."<<endl;
            goto burgerselection;
        }
      
        }
};
        
        
        
        