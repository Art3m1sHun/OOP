#include "congty.h"
#include "kiemchungvien.h"
#include "laptrinhvien.h"
#include "quanlynhanvien.h"

congty :: congty() {
    soluongnhanvien = 0;
    dulieu = new nhanvien*[soluongnhanvien];
}

congty :: ~congty() {
    delete[]dulieu;
}

void congty :: nhapthongtin(){
    cout << "nhap so luong nhan vien: "; cin >> soluongnhanvien;
    int mode = 0;
    for (int i = 0; i < soluongnhanvien; i++){
        do {
            cout << "nhap thong tin nhan vien thu " << i + 1 << endl;
            cout <<"chon 1: lap trinh vien" <<endl;
            cout << "chon 2: kiem chung vien" << endl;
            cout <<"nhap lua chon :";
            cin >> mode;
            if (mode != 1 && mode != 2){
                cout << "vui long nhap lai" << endl;
            }
        }while (mode != 1 && mode !=2);
        if (mode = 1){
            dulieu[i] = new LTV;
        }
        if (mode = 2){
            dulieu[i] = new KCV;
        }
        dulieu[i]->Nhap();
    }
}
