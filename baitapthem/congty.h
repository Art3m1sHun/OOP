#include <iostream>
#include <string.h>
#pragma once
using namespace std;

class nhanvien{
protected:
    string manhanvien;
    string hovaten;
    int tuoi;
    float sdt;
    string email;
    float luong;
public:
    nhanvien();
    ~nhanvien(){}
    void Nhap();
    void Xuat();
    void Tinhluong();
};