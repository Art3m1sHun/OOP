#include <iostream>
#include <string>
#pragma once
using namespace std;

class ve{
protected:
    string mave;
    string hoten;
    int namsinh;
    int sotrochoi;
    static int vetrochoi
public:
    ve();
    virtual ~ve();
    virtual void nhap();
    virtual void xuat();
    virtual static int vethamgia();
};