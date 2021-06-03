#include <iostream>
using namespace std;



int
main ()
{


string t, cv;


float l, pc, tn;


cout << "Nhap ten : " << endl;

getline (std::cin, t);	/*nhap string */


cout << "Nhap chuc vu : (GD, TP, PP, NV) " << endl;


getline (std::cin, cv);


cout << "Nhap luong : " << endl;


cin >> l;


cout << t << endl;




if (cv == "GD" || cv == "gd")


    {


pc = l * 0.5;


tn = l + pc;

cout << "Giam doc" << endl;

cout << "Luong : " << l << endl;


cout << "Phu cap : " << pc << endl;



cout << "Tong : " << tn << endl;


}


if (cv == "TP" || cv == "tp")

    {


pc = l * 0.4;


tn = l + pc;

cout << "Truong phong" << endl;

cout << "Luong : " << l << endl;


cout << "Phu cap : " << pc << endl;


cout << "Tong : " << tn << endl;


}

if (cv == "PP" || cv == "pp")

    {


pc = l * 0.3;


tn = l + pc;

cout << "Pho phong" << endl;

cout << "Luong : " << l << endl;


cout << "Phu cap : " << pc << endl;


cout << "Tong : " << tn << endl;


}

if (cv == "NV" || cv == "nv")


    {

cout << "Nhan vien" << endl;

pc = l * 0.2;


tn = l + pc;


cout << "Luong : " << l << endl;


cout << "Phu cap : " << pc << endl;


cout << "Tong : " << tn << endl;


}

}





