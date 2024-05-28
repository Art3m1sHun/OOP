#include "vevaocong.h"

ve :: ve(){
    mave = "   ";
    hoten ="   ";
    namsinh = 0;
    vetrochoi = 0;
}
ve :: ~ve(){}
void ve :: nhap(){
    cout << "nhap ma ve: "; getline(cin, mave);
    cout << "nhap ho va ten: "; getline(cin, hoten);
    cin.ignore();
    cout << "nhap nam sinh: "; cin >> namsinh;
}

void ve :: xuat(){
    cout << "ma ve: "<< mave << endl;
    cout << "ho va ten: " << hoten << endl;
    cout << "nam sinh: "<< namsinh << endl;
}

static int ve :: vethamgia()[
    return vetrochoi++;
]