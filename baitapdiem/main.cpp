#include<iostream>
#include<cmath>

using namespace std;


class Diem
{
private:
    double HoanhDo, TungDo;
public:
    Diem();
    ~Diem();
    void Nhap();
    void Xuat();
    void CaiDatDiem(double x = 0, double y = 0);
    double TraVeHoanhDo();
    double TraVeTungDo();
    void TinhTien();
    void Quay();
};
Diem::Diem()
{

}

Diem::~Diem()
{

}

void Diem::CaiDatDiem(double x, double y)
{
    HoanhDo = x;
    TungDo = y;
}

double Diem::TraVeHoanhDo()
{
    return HoanhDo;
}

double Diem::TraVeTungDo()
{
    return TungDo;
}

void Diem::Nhap()
{
    cout << "Nhap hoanh do: ";
    cin >> HoanhDo;
    cout << "Nhap tung do: ";
    cin >> TungDo;
}

void Diem::Xuat()
{
    cout << "Toa do diem la: ";
    cout << "(" << HoanhDo << ";" << TungDo << ")";
}

void Diem::TinhTien()
{
    Diem DiemTinhTien;
    cout << "Nhap vecto tinh tien: " << endl;
    double X,Y;
    cout << "Nhap hoanh do: ";
    cin >> X;
    cout << "Nhap tung do: ";
    cin >> Y;
    DiemTinhTien.HoanhDo = HoanhDo + X;
    DiemTinhTien.TungDo = TungDo + Y;
    cout << "Diem sau khi tinh tien theo vecto (" << X << ";" << Y << ") la: ";
    cout << "(" << DiemTinhTien.HoanhDo << ";" << DiemTinhTien.TungDo << ")"; 
}

void Diem::Quay()
{
    Diem diem;
    double GocQuay;
    cout << "Nhap vao goc quay: ";
    cin >> GocQuay;
    diem.HoanhDo = HoanhDo*cos(GocQuay) - TungDo*sin(GocQuay);
    diem.TungDo = HoanhDo*sin(GocQuay) + TungDo*cos(GocQuay);
    cout << "Diem qua goc quay tam O goc quay " << GocQuay << " la: ";
    cout << "(" << diem.HoanhDo << ";" << diem.TungDo << ")";
}
int main()
{
    Diem ToaDo;
    ToaDo.Nhap();
    ToaDo.Xuat();
    cout << endl;
    ToaDo.TinhTien();
    cout << endl;
    ToaDo.Quay();
    system("pause");
    return 0;
}