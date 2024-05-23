#include "congty.h"
#include "kiemchungvien.h"
#include "laptrinhvien.h"

class congty {
protected:
    nhanvien** dulieu;
    long soluongnhanvien;
    long tienluong;
public:
    congty();
    ~congty();
    bool kiemtra();
    void capnhatthongtin();
    void Nhapthongtin();
    void Xuatthongtin();
};