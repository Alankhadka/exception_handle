#include<iostream>
#include "MyTime.h"
#include "Outofrange.h"
using namespace std;
int main()
{
    int hour,minute,second,Number;
    MyTime time;
 char n;
    cout<<"enter the values for hour::minute::second"<<endl;
    while(cin>>hour>>minute>>second)
    {
        try
        {
            time.setTime(hour,minute,second);
            break;
        }


        catch(Outofrange &outofrange)
        {
           cout<<"Error occured "<<outofrange.what()<<endl;
        }


    }


cout<<"enter 1 to know the previous time and 0 for next"<<endl;
cin>>Number;
if(Number==1)
{
    cout<<"you chosed to see previous time"<<endl;
    cout<<"Enter H,M or S to see Hour,Minute or Second respectively"<<endl;
    cin.get();
   cin>>n;
    switch(n)
    {
    case 'h':
        time.previousHour();
        break;

    case 'm':
        time.previousMinute();
        break;

    case 's':
    time.previousSecond();
        break;

     default:
    cout << "invalid entry" << endl;



}
cout<<time.toString()<<endl;
}

else
    cout<<"\n";
    cout<<"Your time after is";
    cout<<"Enter H,M or S to see Hour,Minute or Second respectively"<<endl;
    cin>>n;
    switch(n)
    {
    case 'h':
        time.nextHour();
        break;

    case 'm':
        time.nextMinute();
        break;

    case 's':
        time.nextSecond();
        break;

    default:
    cout << "invalid entry" << endl;
    }

     cout<<time.toString();






}
