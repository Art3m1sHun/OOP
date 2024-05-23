#include "congty.h"
#pragma once
using namespace std;

class LTV : virtual public nhanvien{
int sogiolamviec;
float luongcoban;
public:
string getmaso();
LTV();
~LTV();
virtual void Nhap();
virtual void Xuat();
virtual float Tinhluong();
};