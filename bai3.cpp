#include <iostream>

using namespace std;

int main()
{   char  a;
	cin>>a;
	if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
		if (a>='a' && a<='z')
			a=a-32;
		else a=a+32;
	cout<<a;

    return 0;
}
