#include <iostream>
#include <cmath>
#pragma once
using namespace std;

class Sophuc {
    int x,y;
public:
    friend istream& operator >> (istream &in, Sophuc &a);
    friend ostream& operator << (ostream &out, Sophuc a);
    Sophuc operator + (Sophuc a);
    Sophuc operator - (Sophuc a);
    Sophuc operator / (Sophuc a);
    Sophuc operator * (Sophuc a);
    bool operator == (Sophuc a);
    bool operator != (Sophuc a);
};