#include "sophuc_lib.h"
using namespace std;

istream& operator >> (istream &in, Sophuc &a){
    cout << "Nhap so phuc" << endl;
    in >> a.x >> a.y;
    return in;
}

ostream& operator << (ostream &out, Sophuc a){
    out << a.x << "," << a.y;
    return out;
}

Sophuc Sophuc :: operator + (Sophuc a){
    Sophuc Tong;
    Tong.x = (this->x) + a.x;
    Tong.y = (this->y) + a.y;
    return Tong;
}

Sophuc Sophuc :: operator - (Sophuc a){
    Sophuc Hieu;
    Hieu.x = (this-> x) - a.x;
    Hieu.y = (this-> y) - a.y;
    return Hieu;
}

Sophuc Sophuc :: operator * (Sophuc a){
    Sophuc Tich;
    Tich.x = (this->x) * a.x - (this->y) * a.y;
	Tich.y = (this->x) * a.y - (this->y) * a.x;
    return Tich;
}
Sophuc Sophuc :: operator / (Sophuc a){
   Sophuc Thuong;
	Thuong.x = (((this->x) * a.x + (this->y) * a.y) / (pow(a.x, 2) + pow(a.y, 2)));
	Thuong.y = (((this->y) * a.x - (this->x) * a.y) / (pow(a.x, 2) + pow(a.y, 2)));
	return Thuong;
}
bool Sophuc :: operator == (Sophuc a){
    return (this-> x) == a.x && (this->y) == a.y;
}
bool Sophuc :: operator != (Sophuc a){
    return (this->x) != a.x && (this->y) != a.y;
}