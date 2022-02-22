#include <iostream>


using namespace std;
class pizza
{
public:
int selection(double &totalbill){
char pizza1[]="Chicken Pizza" ,pizza2[]="Paneer Pizza" ,pizza3[]="Corn Pizza" ,pizza4[]="Cheese n Tomato Pizza",pizza5[]="Mexican Green Wave";
int pchoice,pchoice1,quantity, cost1;
char gotostart;

pizzaselection:
cout<<"\n1) "<<pizza1<<"\n";
cout<<"2) "<<pizza2<<"\n";
cout<<"3) "<<pizza3<<"\n";
cout<<"4) "<<pizza4<<"\n";
cout<<"5) "<<pizza5<<"\n";
cout<<"\nPlease Enter which Flavour would you like to have?:";
cin>>pchoice;
if(pchoice>=1 && pchoice<=5)
{
pizzasizeselection:
cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
cout<<"\nChoose Size Please:";
cin>>pchoice1;
if(pchoice1>=1 && pchoice1<=3)
{
cout<<"\nPlease Enter Quantity: ";
cin>>quantity;
switch(pchoice1)
{
case 1: cost1 = 250*quantity;
totalbill+=cost1;
break;
case 2: cost1 = 500*quantity;
totalbill+=cost1;
break;
case 3: cost1 = 900*quantity;
totalbill+=cost1;
break;
}
switch (pchoice1)
{
case 1:
cout<<"\t\t\t--------Your Order---------\n";
cout<<""<<quantity<<" "<<pizza1;
cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
cout<<"\n\nThank you For Ordering From Bite-At-Night\n";
break;
case 2:
cout<<"\t\t--------Your Order---------\n";
cout<<""<<quantity<<" "<<pizza2;
cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
cout<<"\nThank you For Ordering From Bite-At-Night\n";
break;
case 3:
cout<<"\t\t--------Your Order---------\n";
cout<<""<<quantity<<" "<<pizza3;
cout<<"\nYour Bill is "<<totalbill<<"\nYour Order Will be delivered in 40 Minutes";
cout<<"\nThank you For Ordering From Bite-At-Night\n";
break;
case 4:
cout<<"\t\t--------Your Order---------\n";
cout<<""<<quantity<<" "<<pizza4;
cout<<"\nYour Bill is "<<cost1<<"\nYour Order Will be delivered in 40 Minutes";
cout<<"\nThank you For Ordering From Bite-At-Night\n";
break;
case 5:
cout<<"\t\t--------Your Order---------\n";
cout<<""<<quantity<<" "<<pizza5;
cout<<"\nYour Bill is "<<cost1<<"\nYour Order Will be delivered in 40 Minutes";
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
cout<<"Select 'y' or 'Y' for yes and 'n' or 'N' for no."<<endl;
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
else if(pchoice1<1 || pchoice1>3)
{
cout<<"Not a valid size."<<endl;
goto pizzasizeselection;
}
}
else if (pchoice<1 || pchoice>5)
{
cout<<"Invalid selection "<<endl;
goto pizzaselection;
}
}
};