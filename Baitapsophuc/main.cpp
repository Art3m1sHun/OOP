#include "sophuc_lib.h"
#include "sophuc.cpp"

int main () {
    Sophuc a, b;
    cout << "Bai tap so phuc" << endl;
    cout << "===============" << endl;
    cout << "0: Ket thuc chuong trinh" << endl;
    cout << "1: nhap so phuc a va b" << endl;
    cout << "2: xuat so phuc a va b" << endl;
    cout << "3: tong hai so phuc a va b" << endl;
    cout << "4: hieu hai so phuc a va b" << endl;
    cout << "5: tich hai so phuc a va b" << endl;
    cout << "6: thuong hai so phuc a va b" << endl;
    cout << "7: so sang hai so phuc a va b" << endl;
    int mode;
    while (1){
        cout << "Nhap chuc nang: "<< endl;
        cin >> mode;
        switch (mode){
            case 0:
            return 0;
            case 1:
            cin >> a;
            cin >> b;
            break;
            case 2:
            cout << a << endl;
            cout << b << endl;
            break;
            case 3:
            Sophuc tong;
            tong = a + b;
            cout << tong << endl;
            break;
            case 4:
            Sophuc hieu;
            hieu = a - b;
            cout << hieu << endl;
            break;
            case 5:
            Sophuc tich;
            tich = a*b;
            cout << tich << endl;
            break;
            case 6:
            Sophuc thuong;
            thuong = a / b;
            cout << thuong << endl;
            break;
            case 7:
            if ( a != b) cout << "a khac b" << endl;
            if ( a == b) cout << "a bang b" << endl;
            break;
        }
    }
    return 0;
}