#include "time.h"


istream& operator >> (istream &in,  CTime &a){
    cout << "Nhap thoi gian" << endl;
    in >> a.gio >> a.phut >> a.giay;
    if (a.gio < 0 || a.gio >= 24 || a.phut < 0 || a.phut >= 60 || a.giay < 0 || a.giay >= 60) {
    cout << "nhap lai thoi gian" << endl;
    return in;
    }
    return in;
}
ostream& operator << (ostream &out,  CTime a){
    out <<"Thoi gian la: " << a.gio <<":"<<a.phut<<":"<<a.giay<<endl;
    return out;
}
CTime CTime :: operator + (CTime a){
    CTime time;
    time.gio = (this->gio) + a.gio;
    time.phut = (this->phut) + a.phut;
    time.giay = (this->giay) + a.giay;
    while (time.phut >= 60 || time.giay >= 60 || time.gio >= 24){
    if(time.giay >= 60){
        time.phut = time.phut + 1;
        time.giay = time.giay - 60;
        }
    if (time.phut >= 60){
        time.gio = time.gio + 1;
        time.phut = time.phut - 60;
        }
    if (time.gio > 23)
        {
            
        }
    }
    return time;
}

CTime CTime :: operator - (CTime a){
    CTime time;
    time.gio = (this->gio) - a.gio;
    time.phut = (this->phut) - a.phut;
    time.giay = (this->giay) - a.giay;
    while (time.phut < 0|| time.phut < 0 || time.giay < 0){
    if(time.giay < 0){
        time.phut = time.phut - 1;
        time.giay = time.giay + 60;
        }
    if (time.phut < 0){
        time.gio = time.gio - 1;
        time.phut = time.phut + 60;
        }
    if (time.gio > 23)
        {
            
        }
    }
    return time;
}

CTime CTime :: operator + (int a){
    CTime time;
    time.giay = (this->giay) + a;
    time.phut = (this->phut) ;
    time.gio = (this->gio) ;
    while (time.phut >= 60 || time.giay >= 60 || time.gio >= 24){
    if(time.giay >= 60){
        time.phut = time.phut + 1;
        time.giay = time.giay - 60;
        }
    if (time.phut >= 60){
        time.gio = time.gio + 1;
        time.phut = time.phut - 60;
        }
    if (time.gio > 23)
        {
            
        }
    }
    return time;
}
CTime CTime :: operator++(){
    CTime time;
    time.giay = ++(this->giay);
     time.phut = (this->phut) ;
    time.gio = (this->gio) ;
    while (time.phut >= 60 || time.giay >= 60 || time.gio >= 24){
    if(time.giay >= 60){
        time.phut = time.phut + 1;
        time.giay = time.giay - 60;
        }
    if (time.phut >= 60){
        time.gio = time.gio + 1;
        time.phut = time.phut - 60;
        }
    if (time.gio > 23)
        {
        }
    }
    return time;
}

CTime CTime :: operator-- (){
    CTime time;
    time.gio = (this->gio);
    time.phut = (this->phut);
    time.giay = --(this->giay);
    while (time.phut < 0|| time.phut < 0 || time.giay < 0){
    if(time.giay < 0){
        time.phut = time.phut - 1;
        time.giay = time.giay + 60;
        }
    if (time.phut < 0){
        time.gio = time.gio - 1;
        time.phut = time.phut + 60;
        }
    if (time.gio > 23)
        {
            
        }
    }
    return time;
}