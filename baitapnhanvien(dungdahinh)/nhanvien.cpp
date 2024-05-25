#include "nhanvien.h"

nhanvien :: nhanvien (){
    hoten ="unknows";
    ngaysinh = "unknows";
    luong = 0;
}
nhanvien :: ~nhanvien(){}

void nhanvien :: nhap() {
    cout << "nhap ho va ten "; getline(cin, hoten);
    cout << "nhap ngay sinh "; getline(cin, ngaysinh);
}

void nhanvien :: xuat(){
    cout << "ho va ten: " << hoten << endl;
    cout << "ngay sinh: " << ngaysinh << endl;
}

float nhanvien :: tinhluong(){
    return 0;
};