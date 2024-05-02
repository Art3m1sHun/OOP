#include <iostream>
#include <cmath>
#pragma once
using namespace std;

class Money{
    float dollar, cent;
public:
    void Nhap();
    void Xuat();
    void laygiatien(int = 0, int = 0);
    friend istream& >> (istream &in, Money a);
    friend ostream& << (ostream &out, Money a);
    float travesotiendollar();
    float travesotiencent();
    float thaydoitigia();
    float operator++ (float tigia);
    
};