#include<iostream>
using namespace std;
class pasta
{
    public:
int selection(double &totalbill){
     char pasta1[]="Spaghetti Bolognese" ,pasta2[]="Spaghetti Carbonara";
     int pchoice,pchoice1,quantity, cost2,freq;
     char gotostart;

     pastaselection:
    cout<<"\n1 "<<pasta1<<" Rs.180"<<"\n";
        cout<<"2 "<<pasta2<<" Rs.150"<<"\n";
        cout<<"\nPlease Enter which Pasta you would like to have?: ";
        cin>>pchoice;
        if(pchoice>=1 && pchoice<=2)
        {
            cout<<"\nPlease Enter Quantity: ";
            cin>>quantity;
            switch(pchoice)
            {
            case 1: cost2 = 180*quantity;
            totalbill+=cost2;
            break;
            case 2: cost2 = 150*quantity;
            totalbill+=cost2;
            break;
            }
            switch (pchoice)
            {
             case 1:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<" "<<pasta1;
             cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
             cout<<"\nThank you For Ordering From Bite-At-Night\n";
             break;
             case 2:
             cout<<"\t\t--------Your Order---------\n";
             cout<<""<<quantity<<"  "<<pasta2;
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
        else if(pchoice<1 || pchoice>2)
        {
            cout<<"Please select the pasta given in this list."<<endl;
            goto pastaselection;
        }

}
};
