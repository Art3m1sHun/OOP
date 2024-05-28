#include "nhanvien.h"
#pragma once

class quanli {
private:
    nhanvien** dulieu;
    int soluongnhanvien;
    long tongsoluongphaitra;
    long luongcaonhat;
    long luongthapnhat;
    int min, max;
public:
    quanli();
    ~quanli();
    void nhapthongtin();
    void xuatthongtin();
};