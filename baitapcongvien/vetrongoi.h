#include "vevaocong.h"
#pragma once

class vetrongoi : virtual public ve{
protected:
    long tongsotien;
public:
    vetrongoi();
    ~vetrongoi();
    void nhap();
    void xuat();
    long tongtien();
}