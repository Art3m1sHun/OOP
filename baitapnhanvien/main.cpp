#include "nhanvien.cpp"
#include "nhanvien.h"
#include "nvsx.h"
#include "nvvp.h"
#include "nvvp.cpp"
#include "nvsx.cpp"

class Congty {
     NhanVien** DuLieu;
    long SoLuongNhanVien;
public:
    Congty();
    ~Congty();
    void Nhap();
    void Xuat();
};

Congty :: Congty () {
    SoLuongNhanVien = 0;
    DuLieu = new NhanVien* [SoLuongNhanVien];
}

Congty :: ~Congty () {
    delete[] DuLieu;
}

void Congty :: Nhap(){
    cout << "Nhap so luong nhan vien: " << endl;
    cin >> SoLuongNhanVien;
    int mode;
    for (int i = 0; i < SoLuongNhanVien; i++){
        do {
            cout << "Nhap thong tin nhan vien thu: " << i + 1 << endl;
            cout <<"1: nhan vien san xuat" << endl;
            cout << "2: nhan vien van phong" << endl;
            cin >> mode;
            if (mode != 1 && mode !=2){
                cout << "nhap sai lua chon" << endl;
            }
        }while(mode != 1 && mode != 2);
        if (mode == 1) {
            DuLieu[i] = new NhanVienSanXuat;
        }
        if (mode == 2) {
            DuLieu[i] = new NhanVienVanPhong;
        }
        DuLieu[i]->Nhap();
    }
}

void Congty :: Xuat() {
    cout << "So luong nhan vien cua cong ty: " << SoLuongNhanVien << endl;
    for (int i = 0; i < SoLuongNhanVien; i++)
    {
        cout << "=================================================" << endl;
        cout << "Thong tin nhan vien thu: " << i + 1 << endl;
        DuLieu[i]->Xuat();
        cout << "Tien luong nhan duoc: " << DuLieu[i]->Luong() << endl;
    }
}

int main () {
    Congty DuLieu;
    DuLieu.Nhap();
    DuLieu.Xuat();
    return 0;
}