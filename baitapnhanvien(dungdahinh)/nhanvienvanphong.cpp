#include "nhanvienvanphong.h"

nvvp :: nvvp(){
    songaylamviec = 0;
}

nvvp :: ~nvvp(){}

void nvvp :: nhap(){
    nhanvien :: nhap();
    cout << "nhap so ngay lam viec: "; cin >> songaylamviec;
}

long nvvp::tinhluong(){
    return songaylamviec*100000;
}

void nvvp :: xuat(){
    nhanvien :: xuat();
}