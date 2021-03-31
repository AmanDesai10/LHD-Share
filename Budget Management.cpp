#include<iostream>
using namespace std;

int main()
{
       int total ,c;
       int num;
       cout<<"What is your account balance ??";
       cin>>total;
       while(true)
       {
        cout<<"1 => Credit in yr total amount "<<endl<<"2 => Debit from yr total amount"<<endl<<"3 => Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>c;
        if(c == 1)
        {
            cout<<"How much money you want to credit in yr total amount : ";
            cin>>num;
            total = total + num;
            cout<<"Current Balance :"<<total<<endl;
        }
        else if(c == 2)
        {
            cout<<"How much money you want to debit from yr total amount : ";
            cin>>num;
            total = total - num;
            cout<<"Current Balance :"<<total<<endl;
        }
        else
        {
            return 0;
        }
       }
}