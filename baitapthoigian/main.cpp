#include<iostream>
#include"ThoiGian.h"
#include"ThoiGian.cpp"
using namespace std;

int main()
{
    ThoiGian DuLieu;
    DuLieu.Nhap();
    DuLieu.XuLyThoiGian();
    DuLieu.Xuat();
    system("pause");
    return 0;
}