#include "nhanviensanxuat.h"

nvsx :: nvsx(){
    luongcanban = 0;
    sosanpham = 0;
}

nvsx :: ~nvsx(){}

void nvsx :: nhap(){
    nhanvien::nhap();
    cout << "nhap luong can ban: "; cin >> luongcanban;
    cout << "nhap so san pham: "; cin >> sosanpham;
}

long nvsx :: tinhluong(){
    return luongcanban + sosanpham*5000;
}

void nvsx :: xuat(){
    nhanvien::xuat();
}