#include<iostream>
#include<sstream>
#include "MyTime.h"
using namespace std;

MyTime::MyTime()
{

}
MyTime::MyTime(int fhour,int fminute,int fsecond)
{
    setTime(fhour,fminute,fsecond);
    this->hour=fhour;
    this->minute=fminute;
     this->second=fsecond;
}
void MyTime::setHour(int fhour)
{
    if(fhour==0 || fhour>24)
    throw Outofrange();
    hour=fhour;

}
void MyTime::setMinute(int fminute)
{

    if(fminute==0 && fminute>60)
        throw Outofrange();
    minute=fminute;
}
void MyTime::setSecond(int fsecond)

{
    if(fsecond==0 && fsecond>60)
    throw Outofrange();
    second=fsecond;
}

int MyTime::getHour()
{
    return hour;
}
int MyTime::getMinute()
{
    return minute;
}
int MyTime::getSecond()
{
    return second;
}

void MyTime::setTime(int fhour,int fminute,int fsecond)
{
    setHour(fhour);
    setMinute(fsecond);
    setSecond(fminute);

}



MyTime MyTime::nextHour(){
    if(hour==23)
        hour=0;
        else
            hour++;
    return MyTime();
}

MyTime MyTime::nextMinute(){
    if (minute==59){
        minute=0;
        hour++;
        if(hour==24){
            hour=0;
        }
    }
    else{
        minute++;
    }
    return MyTime();
}

MyTime MyTime::nextSecond(){
    if (second==59){
        second=0;
        minute++;
    if (minute==60){
       minute=0;
       hour++;
            if(hour==24){
                hour=0;
            }
        }
    }
    else{
        second++;
    }
    return MyTime();
}


string MyTime::toString()
{
    stringstream HOUR,MINUTE,SECOND;
    HOUR<<getHour();
    MINUTE<<getMinute();
    SECOND<<getSecond();
    return "The time in HH:MM:SS  is"+HOUR.str()+"h :"+MINUTE.str()+"m :"+SECOND.str()+"s";
}



MyTime MyTime::previousHour(){
    if(hour==0){
        hour=23;
    }

   else hour--;
   return MyTime();
}

MyTime MyTime::previousMinute(){
    if(minute==0){
        minute=59;
        hour--;
        if(hour==-1){
            hour=23;
        }
    }
    else{
        minute--;
    }
    return MyTime();
}

MyTime MyTime::previousSecond(){
    if(second==0){
        second=59;
        minute--;
        if(minute==-1){
            minute=59;
            hour--;
            if(hour==-1){
                hour=23;
            }
        }
    }
    else{
        second--;
    }
    return MyTime();
}
