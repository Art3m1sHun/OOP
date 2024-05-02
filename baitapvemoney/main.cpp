#include "Money.h"
#include "Money.cpp"

int main () {
    Money tien;
    cout << "Bai tap ve doi tien" << endl;
    cout << "===================" << endl;
    cout << "0: ket thuc chuong trinh" << endl;
    cout << "1: nhap gia tien" << endl;
    cout << "2: xuat gia tien" << endl;
    cout << "3: Thay doi ti gia tien sang VND" << endl;
    cout << "================" << endl;
    int mode;
    while (1) {
        cin >> mode;
        switch(mode) {
            case 0: 
            return 0;
            break;
            case 1:
            cin >> tien;
            break;
            case 2:
            cout << tien;
            break;
            case 3:
            float tigia;
            cin >> tigia;
            float sotien = tien.thaydoitigia(tigia);
            cout << sotien;
            break;
        }
    }
    return 0;
}