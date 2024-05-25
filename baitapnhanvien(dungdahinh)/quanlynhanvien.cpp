#include "quanlynhanvien.h"
#include "nhanvienvanphong.h"
#include "nhanviensanxuat.h"

quanli::quanli() {
  soluongnhanvien = 0;
  dulieu = new nhanvien*[soluongnhanvien];
  tongsoluongphaitra = 0;
  luongcaonhat = 0; max = 0;
  luongthapnhat = 0; min = 0;
}

quanli :: ~quanli(){
    for(int i = 0; i < soluongnhanvien; i++)
        delete dulieu[i];
    delete[]dulieu;
}

void quanli :: nhapthongtin(){
    cout << "nhap so luong nhan vien: "; cin >> soluongnhanvien;
    int mode = 0;
    for (int i = 0; i < soluongnhanvien; i++){
        do{
            cout << "nhap thong tin nhan vien thu "<< i + 1 << endl;
            cout << "1: nhan vien van phong" << endl;
            cout << "2: nhan vien san xuat" << endl;
            cin >> mode; 
            cin.ignore();
            if(mode != 1 && mode != 2) cout << "nhap lai!" << endl;
        }while(mode != 1 && mode != 2);
        if(mode == 1){
            dulieu[i] = new nvvp;
        }
        else if(mode == 2){
            dulieu[i] = new nvsx;
        }
        dulieu[i]->nhap();
        tongsoluongphaitra +=dulieu[i]->tinhluong();
    }
}

void quanli :: xuatthongtin(){
    cout << "so luong nhan vien: " << soluongnhanvien << endl;
    for (int i = 0; i < soluongnhanvien; i++)
    {
        cout << "Thong tin nhan vien thu: " << i + 1 << endl;
        dulieu[i]->xuat();
        cout << "Tien luong nhan duoc: " << dulieu[i]->tinhluong() << endl;
    }
    cout << "Tong so tien luong ma cong ty phai tra cho nhan vien: " << tongsoluongphaitra << endl;
    luongcaonhat = dulieu[0]->tinhluong();
    luongthapnhat = dulieu[0]->tinhluong();
    for (int i = 0; i < soluongnhanvien; i++)
    {
        if (dulieu[i]->tinhluong() > luongcaonhat)
        {
            luongcaonhat = dulieu[i]->tinhluong();
            max = i;
        }
        if (dulieu[i]->tinhluong() < luongthapnhat)
        {
            luongthapnhat = dulieu[i]->tinhluong();
            min = i;
        }
    }
    cout << "Nhan vien co muc luong cao nhat la: " << endl;
    dulieu[max]->xuat();
    cout << endl;
    cout << "Nhan vien co muc luong thap nhat la: " << endl;
    dulieu[min]->xuat();
    cout << endl;
}