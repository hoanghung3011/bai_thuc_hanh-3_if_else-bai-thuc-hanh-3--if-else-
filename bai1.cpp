#include <iostream>

 using namespace std;


int
main ()
{

int dm, n, tt, ts, t;

cout << "Nhap dinh muc" << endl;

cin >> dm;

cout << "Nhap chi so dien ke thang truoc :" << endl;

cin >> tt;

cout << "Nhap chi so dien ke thang nay :" << endl;

cin >> ts;

if ((tt - ts) <= dm)
    t = (tt - ts) * 5;

  else

if ((tt - ts) <= (dm + 100))
    t = dm * 5 + (tt - ts - dm) * 8;

  else
    t = dm * 5 + 100 * 8 + (tt - ts - dm - 100) * 10;

cout << "Tien dien la = " << t;


return 0;

}


