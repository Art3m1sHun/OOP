#include<iostream>
#include"Diem.h"
#include"Diem.cpp"
#include"DaGiac.h"
#include"DaGiac.cpp"
using namespace std;

int main()
{
    DaGiac A;
    cout << "Bai tap ve da giac" <<endl;
    cout << "==================" << endl;
    cout << "0: Ket thuc chuong trinh" << endl;
    cout << "1: Nhap Da giac" << endl;
    cout << "2: Xuat Da giac" << endl;
    cout << "3: Tinh tien da giac" << endl;
    cout << "4: Quay da giac" << endl;
    cout << "5: Phong to da giac" << endl;
    cout << "6: Thu nho da giac" << endl;
    cout << "==================" << endl;
    int mode;
    while(1) {
        cout << "chon chuc nang "<< endl;
        cin >> mode;
        switch (mode) {
            case 0: return 0;
            break;
            case 1: A.Nhap();
            break;
            case 2: A.Xuat();
            break;
            case 3: A.TinhTien();
            break;
            case 4: A.Quay();
            break;
            case 5: A.PhongTo();
            break;
            case 6: A.ThuNho();
            break;
        }
    }
    return 0;
}