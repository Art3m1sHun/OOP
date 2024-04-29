#include<iostream>
#include<cmath>
#include"Diem.h"
using namespace std;

Diem::Diem()
{

}

Diem::~Diem()
{

}

void Diem::CaiDatDiem(double x, double y)
{
    HoanhDo = x;
    TungDo = y;
}

double Diem::TraVeHoanhDo()
{
    return HoanhDo;
}

double Diem::TraVeTungDo()
{
    return TungDo;
}

void Diem::Nhap()
{
    cout << "Nhap hoanh do: ";
    cin >> HoanhDo;
    cout << "Nhap tung do: ";
    cin >> TungDo;
}

void Diem::Xuat()
{
    cout << "(" << HoanhDo << ";" << TungDo << ")";
}

void Diem::TinhTien(double X, double Y)
{
    Diem DiemTinhTien;
    DiemTinhTien.HoanhDo = HoanhDo + X;
    DiemTinhTien.TungDo = TungDo + Y;;
    cout << "(" << DiemTinhTien.HoanhDo << ";" << DiemTinhTien.TungDo << ")"; 
}


void Diem::Quay(double GocQuay)
{
    Diem diem;
    diem.HoanhDo = HoanhDo*cos(GocQuay) - TungDo*sin(GocQuay);
    diem.TungDo = HoanhDo*sin(GocQuay) + TungDo*cos(GocQuay);
    cout << "Diem qua goc quay tam O goc quay " << GocQuay << " la: ";
    cout << "(" << diem.HoanhDo << ";" << diem.TungDo << ")";
}