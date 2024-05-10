#pragma once
#include"nhanvien.h"

class NhanVienVanPhong : public NhanVien
{
protected:
    long SoNgayLamViec;
public:
    NhanVienVanPhong();
    ~NhanVienVanPhong();
    void Nhap();
    void Xuat();
    long Luong();
};