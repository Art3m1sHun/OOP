#pragma once
#include<iostream>
#include<string>
using namespace std;

class NhanVien
{
protected:
    char HoTen[100];
    int Ngay, Thang, Nam;
public:
    NhanVien();
    ~NhanVien();
    void Nhap();
    void Xuat();
    long Luong();
};