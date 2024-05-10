#pragma once
#include"NhanVien.h"

class NhanVienSanXuat : public NhanVien
{
protected:
    long LuongCoBan, SoSanPham;
public:
    NhanVienSanXuat();
    ~NhanVienSanXuat();
    void Nhap();
    void Xuat();
    long Luong();
};