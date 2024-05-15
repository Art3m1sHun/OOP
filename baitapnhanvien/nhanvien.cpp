#include"NhanVien.h"

void NhanVien::Nhap()
{
    cout << "Nhap Ho Va Ten Nhan Vien: ";
    cin.ignore();
    getline(cin, Name);
    cout << "Nhap Ngay Sinh Nhan Vien: ";
    cin.ignore();
    getline(cin, NgaySinh);
}
void NhanVien::Xuat() const
{
    cout << "Ho va Ten: " << Name << endl;
    cout << "Ngay Sinh: " << NgaySinh << endl;
}

void NhanVienSanXuat::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap Luong Co Ban: ";
    cin >> LuongCoBan;
    cout << "Nhap So San Pham: ";
    cin >> SoSanPham;
}
void NhanVienSanXuat::Xuat() const
{
    NhanVien::Xuat();
    cout << "Luong Co Ban: " << LuongCoBan << endl;
    cout << "So San Pham: " << SoSanPham << endl;
}
void NhanVienSanXuat::TinhLuong()
{
    this->Luong = LuongCoBan + SoSanPham * 5000;
}

void NhanVienVanPhong::Nhap()
{
    NhanVien::Nhap();
    cout << "Nhap So Ngay Lam Viec: ";
    cin >> SoNgayLamViec;
}
void NhanVienVanPhong::Xuat() const
{
    NhanVien::Xuat();
    cout << "So Ngay Lam Viec: " << SoNgayLamViec;
}
void NhanVienVanPhong::TinhLuong()
{
    this->Luong = SoNgayLamViec * 100000.0;
}

void QuanLyNV::Nhap()
{
    cout << "Nhap So Luong Nhan Vien San Xuat: ";
    cin >> SoLuongNVSX;
    DSNVSX = new NhanVienSanXuat[SoLuongNVSX];
    for (int i = 0; i < SoLuongNVSX; i++)
    {
        DSNVSX[i].Nhap();
    }
    cout << "Nhap So Luong Nhan Vien Van Phong: ";
    cin >> SoLuongNVVP;
    DSNVVP = new NhanVienVanPhong[SoLuongNVVP];
    for (int i = 0; i < SoLuongNVVP; i++)
    {
        DSNVVP[i].Nhap();
    }
}
void QuanLyNV::Xuat() const
{
    cout << "Xuat Nhan Vien San Xuat: " << endl;
    for (int i = 0; i < SoLuongNVSX; i++)
    {
        DSNVSX[i].Xuat();
    }
    cout << "Xuat Nhan Vien Van Phong: " << endl;
    for (int i = 0; i < SoLuongNVVP; i++)
    {
        DSNVVP[i].Xuat();
    }
}
void QuanLyNV::TinhLuong()
{
    for (int i = 0; i < SoLuongNVSX; i++)
    {
        DSNVSX[i].TinhLuong();
    }
    for (int i = 0; i < SoLuongNVVP; i++)
    {
        DSNVVP[i].TinhLuong();
    }
}
void QuanLyNV::TinhTongLuong()
{
    long double TongLuong = 0;
    for (int i = 0; i < SoLuongNVSX; i++)
    {
        TongLuong += DSNVSX[i].getLuong();
    }
    for (int i = 0; i < SoLuongNVVP; i++)
    {
        TongLuong += DSNVVP[i].getLuong();
    }
    cout << "Tong Luong Cong Ty Phai Tra Cho Nhan Vien La: " << TongLuong << endl;
}
QuanLyNV::~QuanLyNV()
{
    delete[] DSNVSX;
    delete[] DSNVVP;
}
