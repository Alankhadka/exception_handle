#include<iostream>
#include<stdexcept>
#ifndef OUTOFRANGE_H
#define OUTOFRANGE_H
using namespace std;
class Outofrange:public runtime_error
{
public:

    Outofrange():runtime_error ("Value is out of range"){}
};
#endif // OUTOFRANGE_H
