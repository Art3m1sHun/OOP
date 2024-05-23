#include "laptrinhvien.h"
#include "congty.h"
#include "congty.cpp"
using namespace std;
LTV :: LTV(){

}
LTV :: ~LTV(){

}
string LTV :: getmaso(){
    return manhanvien;
}
void LTV :: Nhap(){
    nhanvien :: Nhap();
    cout << "Nhap muc luong co ban" << endl;
    cin >> luongcoban;
    cout << "Nhap so loi kiem tra" << endl;
    cin >> sogiolamviec;
}

float LTV :: Tinhluong(){
    float luong;
    luong = luongcoban + sogiolamviec*50000;
    return luong;
}

void LTV :: Xuat(){
    nhanvien :: Xuat();
}