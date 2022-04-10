#include <iostream>
using namespace std;
class pizza
{
public:
int selection(double &totalbill)
{
char pizza1[]="Chicken Pizza" ,pizza2[]="Paneer Pizza" ,pizza3[]="Corn Pizza" ,pizza4[]="Cheese n Tomato Pizza",pizza5[]="Mexican Green Wave";
int pchoice,pchoice1,quantity, cost1,crust,toppings;
char gotostart, gotocrust, gototoppings;
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
{
cout<<"Would you like to order crust? (Y / N) or (y / n):\n";
cin>>gotocrust;
if(gotocrust=='Y' || gotocrust=='y')
{
goto pizzacrustselection;
}
else if(gotocrust=='N' || gotocrust=='n')
{
goto toppings;
}
else if(gotocrust!='Y'||gotocrust!='y' ||gotocrust!='N' ||gotocrust!='n')
{
cout<<"Select 'y' or 'Y' for yes and 'n' or 'N' for no."<<endl;
cin>>gotocrust;
if(gotocrust=='Y' || gotocrust=='y')
{
goto pizzacrustselection;
}
else if(gotocrust=='N' || gotocrust=='n')
{
goto pizzatoppingsselection;
}
}
pizzacrustselection:
cout<<"\n1) newhandtossed Rs.30\n"<<"2) freshpanpizza Rs.40\n"<<"3) classichandtossed Rs.50\n"<<"4) cheeseburst Rs.40\n";
cout<<"\nChoose Crust Please:";
cin>>crust;
if(crust>=1 && crust<=4)
{
switch(crust)
{
case 1: cost1 = 30*crust;
totalbill+=cost1;
break;
case 2: cost1 = 40*crust;
totalbill+=cost1;
break;
case 3: cost1 = 50*crust;
totalbill+=cost1;
break;
case 4: cost1 = 40*crust;
totalbill+=cost1;
break;
}
{
    toppings:
cout<<"Would you like to order Toppings? (Y / N) or (y/ n):\n";
cin>>gototoppings;
if(gototoppings=='Y' || gototoppings=='y')
{
goto pizzatoppingsselection;
}
else if(gototoppings=='N' || gototoppings=='n')
{
goto bill;
}
else if(gototoppings!='Y'||gototoppings!='y' ||gototoppings!='N' ||gototoppings!='n')
{
cout<<"Select 'y' or 'Y' for yes and 'n' or 'N' for no."<<endl;
cin>>gototoppings;
if(gototoppings=='Y' || gototoppings=='y')
{
goto pizzatoppingsselection;
}
else if(gototoppings=='N' || gototoppings=='n')
{
goto bill;
}
}
pizzatoppingsselection:
cout<<"\n1) Mushrooms Rs.69\n"<<"2) Chicken Rs.99\n"<<"3) Capsicum Rs.49\n"<<"4) Olives Rs.59\n";
cout<<"\nChoose Toppings Please:";
cin>>toppings;
if(toppings>=1 && toppings<=4)
{
switch(toppings)
{
case 1: cost1 = 69*toppings;
totalbill+=cost1;
break;
case 2: cost1 = 99*toppings;
totalbill+=cost1;
break;
case 3: cost1 = 49*toppings;
totalbill+=cost1;
break;
case 4: cost1 = 59*toppings;
totalbill+=cost1;
break;
}
bill:
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
}
else if(crust<1 || crust>4)
{
cout<<"Not a valid crust."<<endl;
goto pizzacrustselection;
}
}
}
else if(toppings<1 || toppings>4)
{
cout<<"Not a valid Topping."<<endl;
goto pizzatoppingsselection;
}
}
else if (pchoice<1 || pchoice>5)
{
cout<<"Invalid selection "<<endl;
goto pizzaselection;
}
}
};
