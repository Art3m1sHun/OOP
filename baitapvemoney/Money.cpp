#include "Money.h"

void Money :: laygiatien(int x, int y){
    dollar = x;
    cent = y;
}
float Money :: travesotiendollar(){
    return dollar;
}
float Money :: travesotiencent() {
    return cent;
}
float Money :: operator++(){
    if (this-> cent >= 100){
        float a = cent / 100;
        float b = cent%100;
        return (this-> dollar)+a && (this ->cent) = b ;
    }
    if (this->cent < 100){
        return (this->cent)++;
    }
}
istream& operator >> (istream &in, Money a){
    cout << "Nhap so tien: "
    in >> a.dollar >> a.cent;
    return in;
}
ostream& operator << (ostream &out, Money a){
    out << "So tien da nhap";
    out << a.dollar << "." << a.cent;
    return out;
}
float Money :: thaydoitigia (tigia) {
    Money giatien;
    giatien.dollar = (this -> dollar) * tigia;
    giatien.cent = ((this -> cent) * tigia) / 100;
    return giatien.dollar + giatien.cent;
}

