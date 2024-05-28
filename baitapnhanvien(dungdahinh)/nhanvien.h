#pragma once
#include <iostream>
#include <string>
using namespace std;

class nhanvien{
protected:
    string hoten;
    string ngaysinh;
    long luong;
public:
    nhanvien();
    virtual ~nhanvien();
    void virtual nhap();
    void virtual xuat();
    long virtual tinhluong();
};