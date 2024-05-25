#include "nhanvien.h"
#pragma once

class quanli {
private:
    nhanvien** dulieu;
    int soluongnhanvien;
    float tongsoluongphaitra;
    float luongcaonhat;
    float luongthapnhat;
    int min, max;
public:
    quanli();
    ~quanli();
    void nhapthongtin();
    void xuatthongtin();
};