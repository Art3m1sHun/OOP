#include "congty.h"

void nhanvien :: Nhap() {
    cout << "nhap ma nhan vien" << endl;
    getline(cin, manhanvien);
    cout << "nhap ho va ten" << endl;
    getline(cin, hovaten);
    cout << "nhap tuoi nhan vien" << endl;
    cin >> tuoi;
    cout << "nhap so dien thoai" << endl;
    cin >> sdt;
    cout << "nhap dia cho email" << endl;
    cin >> email;
}

void nhanvien :: Xuat() {
    cout << "ma so nhan vien: " << manhanvien << endl;
    cout << "ho va ten: " << hovaten << endl;
    cout << "tuoi cua nhan vien: "<< tuoi << endl;
    cout << "so dien thoai: "<< sdt << endl;
    cout << "dia chi email: "<< email << endl;
}