#include<iostream>
using namespace std;
class drink
{
    public:
int selection(double &totalbill){
     
     int pchoice,pchoice1,quantity, cost3;
     char gotostart;
     char drink1[]="Coffee" ,drink2[]="Pepsi" ,drink3[]="Lemonade" ,drink4[]="Monster" ,drink5[]="Red Bull" ,drink6[]="Sting";
     drinkselection:
        cout<<"\n1  "<<drink1<<" Rs.40"<<"\n";
        cout<<"2  "<<drink2<<" Rs.60"<<"\n";
        cout<<"3  "<<drink3<<" Rs.50"<<"\n";
        cout<<"4  "<<drink4<<" Rs.70"<<"\n";
        cout<<"5  "<<drink5<<" Rs.45"<<"\n";
        cout<<"6  "<<drink6<<" Rs.50"<<"\n";
        cout<<"\nPlease Enter the drink you would like to have?:";
        cin>>pchoice;
        if(pchoice>=1 && pchoice<=6)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(pchoice)
            {
            case 1: cost3 = 40*quantity;
            totalbill+=cost3;
            break;
            case 2: cost3 = 60*quantity;
            totalbill+=cost3;
            break;
            case 3: cost3 = 50*quantity;
            totalbill+=cost3;
            break;
            case 4: cost3 = 70*quantity;
            totalbill+=cost3;
            break;
            case 5: cost3 = 45*quantity;
            totalbill+=cost3;
            break;
            case 6: cost3 = 50*quantity;
            totalbill+=cost3;
            break;
            }
            switch (pchoice)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<drink1;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<drink2;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 3:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<drink3;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 4:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<drink4;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 5:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<drink5;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 6:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<drink6;
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
            cout<<"Please select the drink from the given list."<<endl;
            goto drinkselection;
        }
      
}
};