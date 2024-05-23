#include "kiemchungvien.h"
#include "congty.h"
#include "congty.cpp"
using namespace std;
KCV :: KCV(){

}
KCV :: ~KCV(){

}
string KCV :: getmaso(){
    return manhanvien;
}
void KCV :: Nhap(){
    nhanvien :: Nhap();
    cout << "Nhap muc luong co ban" << endl;
    cin >> luongcoban;
    cout << "Nhap so loi kiem tra" << endl;
    cin >> soloikiemchung;
}

float KCV :: Tinhluong(){
    float luong;
    luong = luongcoban + soloikiemchung*50000;
    return luong;
}

void KCV :: Xuat(){
    nhanvien :: Xuat();
}