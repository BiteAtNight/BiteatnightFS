#include<iostream>
#include<conio.h>
#include"Pizza.cpp"
#include"Pasta.cpp"
#include"Payment.cpp"
#include"Drink.cpp"
#include"Burger.cpp"
#include"Biryani.cpp"
#include"Sandwich.cpp"
#include"Icecream.cpp"
#include"Cake.cpp"
using namespace std;
int main()
{
    int choice=0,pchoice,pchoice1, quantity;
    int cost1, cost2, cost3, cost4, cost5, cost6, cost7, cost8;
    // time=40;
    Payment p;
    system ("clear");
    beginning:
    cout<<"\t\t\t----------Bite-At-Night-----------\n\n";
    cout<<"\n\nWhat would you like to order?\n\n";
    cout<<"\t\t\t\t--------Menu--------\n\n";
    cout<<"1) Pizzas\n";
    cout<<"2) Pastas\n";
    cout<<"3) Drinks\n";
    cout<<"4) Burgers\n";
    cout<<"5) Biriyani\n";
    cout<<"6) Sandwich\n";
    cout<<"7) Icecreams\n";
    cout<<"8) cakes\n\n";
    cout<<"\nPlease Enter your Choice: ";
    cin>>choice;
    double totalbill;
    if(choice==1)
     {
         int k=7;
       pizza pz;
       k=pz.selection(totalbill);
       if(k==1)
       goto beginning;
       if(k==0)
       p.makePayment(totalbill);

    }
    else if(choice==2)
     {
       int k=4;
       pasta ps;
       k=ps.selection(totalbill);
       if(k==1)
       goto beginning;
       if(k==0)
       p.makePayment(totalbill);
     }
    else if(choice==3)
     {
        int k=4;
       drink dk;
       k=dk.selection(totalbill);
       if(k==1)
       goto beginning;
       if(k==0)
       p.makePayment(totalbill);
     }

    else if(choice==4)
     {
         int k=4;
        burger bg;
       k=bg.selection(totalbill);
       if(k==1)
       goto beginning;
       if(k==0)
       p.makePayment(totalbill);
        
}
    else if(choice==5)
     {
         int k=4;
        biryani br;
       k=br.selection(totalbill);
       if(k==1)
       goto beginning;
       if(k==0)
       p.makePayment(totalbill);
     }
    else if(choice==6)
     {
         int k=4;
        sandwich sw;
       k=sw.selection(totalbill);
       if(k==1)
       goto beginning;
       if(k==0)
       p.makePayment(totalbill);
    }
    else if(choice==7)
     {
        int k=4;
        icecream ic;
       k=ic.selection(totalbill);
       if(k==1)
       goto beginning;
       if(k==0)
       p.makePayment(totalbill);
            }
    else if(choice==8)
     {
         int k=4;
    cake ck;
       k=ck.selection(totalbill);
       if(k==1)
       goto beginning;
       if(k==0)
       p.makePayment(totalbill);
        
            }
    else if(choice!=1 || choice!=2 || choice!=3 || choice!=4 || choice!=5 || choice!=6 || choice!=7 || choice!=8)
     {
        cout<<"Please select the food items from the given list."<<endl;
        goto beginning;
    }
   
    return 0;
     }  
