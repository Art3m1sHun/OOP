#include "time.h"
#include "time.cpp"

int main()
{
    CTime a, b;
    int d;
    int mode;
    cout << "Bai tap thoi gian " << endl;
    cout << "==================" << endl;
    cout << "0: ket thuc chuong trinh" << endl;
    cout << "1: Nhap thoi gian a va b" << endl;
    cout << "2: Xuat hai thoi gian a va b" << endl;
    cout << "3: Cong hai thoi gian a va b" << endl;
    cout << "4: Tru hai thoi gian a va b" << endl;
    cout << "5: Cong them gia tri vao giay" << endl;
    cout << "6: Tru mat gia tri vao giay" << endl;
    cout << "7: Cong them vao giay 1 don vi" << endl;
    cout << "8: Tru vao giay 1 don vi" << endl;
    cout << "==================" << endl;
    while (1){
        cout << "nhap chuc nang" << endl;
        cin >> mode;
        switch(mode){
            case 0: return 0;
            case 1:
            cin >> a >> b;
            break;
            case 2:
            cout << a << b;
            break;
            case 3:
            CTime c3;
            c3 = a + b;
            cout << c3;
            break;
            case 4:
            CTime c4;
            c4 = a - b;
            cout << c4;
            break;
            case 5:
            CTime c5;
            cout << "Nhap gia tri: " << endl;
            cin >> d;
            c5 = a + d;
            cout << c5;
            break;
            case 6:
            CTime c6;
            int giatri6;
            cout << "Nhap gia tri: " << endl;
            cin >> giatri6;
            c6 = a - giatri6;
            cout << c6;
            break;
            case 7:
            ++a;
            cout << a;
            break;
            case 8:
            --a;
            cout << a;
            break;
        }

    }
    system("pause");
    return 0;
}