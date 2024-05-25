#pragma once 
#include "nhanvien.h"

class nvsx : virtual public nhanvien{
protected:
    long luongcanban;
    float sosanpham;
public:
    nvsx();
    ~nvsx();
    void nhap();
    void xuat();
    float tinhluong();
};