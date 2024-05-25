#pragma once
#include "nhanvien.h"

class nvvp : virtual public nhanvien {
protected:
    float songaylamviec;
public:
    nvvp();
    ~nvvp();
    void nhap();
    void xuat();
    float tinhluong();
};