#include <iostream>
#include <cmath>
using namespace std;
#pragma once


class CTime{
public:
    int gio, phut, giay;
    CTime operator + (CTime a);
    CTime operator - (CTime a);
    CTime operator + (int);
    CTime operator - (int);
    friend istream& operator >>(istream& in, CTime &a);
    friend ostream& operator << (ostream& out,  CTime a);
    CTime operator ++ ();
    CTime operator -- ();
};
