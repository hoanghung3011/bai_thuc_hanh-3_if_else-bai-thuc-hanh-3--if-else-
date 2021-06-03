#include <iostream>
#include <math.h>
 using namespace std;


int
main ()
{
  float a, b, c;

a = 1;
b = 1;
c = sqrt(2);

if (a>0 && b>0 && c>0)

{if ((a + b) > c || (a + c) > b || (b + c) > a)

		if (a == b && b == c)

			cout << "La tam giac deu" << endl;

		else

			if ((a == b && (a * a + b * b) == (c * c)) || (b == c && (b * b + c * c) == (a * a)) || (a == c && (a * a +c * c) ==(b * b)))

		cout << "La tam giac vuong can" << endl;

			else

				if (a == b || a == c || b == c)

cout << "La tam giac can" << endl;

    else

if ((a * a + b * b == c * c) || (b * b + c * c == a * a)
	   || (a * a + c * c == b * b))

cout << "La tam giac vuong" << endl;

    else

cout << "La tam giac thuong" << endl;}

else cout<<"Khong phai tam giac";

return 0;

}


