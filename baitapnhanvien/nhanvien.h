#pragma once
#include<iostream>
#include<string>
using namespace std;

class NhanVien
{
public:
    NhanVien()
    {
        Name = "Unknows";
        NgaySinh = "Unknows";
        Luong = 0;
    }
    void Nhap();
    void Xuat() const;
    void TinhLuong();
    float getLuong()
    {
        return Luong;
    }
protected:
    string Name;
    string NgaySinh;
    float Luong;
private:
};

class NhanVienSanXuat : public NhanVien
{
public:
    NhanVienSanXuat()
    {
        LuongCoBan = 0;
        SoSanPham = 0;
    }
    void Nhap();
    void Xuat() const;
    void TinhLuong();
protected:
    float LuongCoBan;
    int SoSanPham;
private:
};

class NhanVienVanPhong : public NhanVien
{
public:
    NhanVienVanPhong()
    {
        SoNgayLamViec = 0;
    }
    void Nhap();
    void Xuat() const;
    void TinhLuong();
protected:
    int SoNgayLamViec;
private:
};

class QuanLyNV
{
public:
    void Nhap();
    void Xuat() const;
    void TinhLuong();
    void TinhTongLuong();
    ~QuanLyNV();
protected:

private:
    int SoLuongNVSX;
    int SoLuongNVVP;
    NhanVienSanXuat* DSNVSX;
    NhanVienVanPhong* DSNVVP;
};