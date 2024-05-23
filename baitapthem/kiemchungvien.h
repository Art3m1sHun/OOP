
#include "congty.h"

using namespace std;

#pragma once

class KCV : virtual public nhanvien {
int soloikiemchung;
float luongcoban;
public:
string getmaso();
KCV();
~KCV();
virtual void Nhap();
virtual void Xuat();
virtual float Tinhluong();
};