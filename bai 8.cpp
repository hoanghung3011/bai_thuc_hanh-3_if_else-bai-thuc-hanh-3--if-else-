#include <iostream>
using namespace std;



int
main ()
{
    int t,n;
    cout<<"Nhap thang : "<<endl;
    cin>>t;
    cout<<"Nhap nam : "<<endl;
    cin>>n;
    if (t==1 || t==3 || t==5 || t==7 || t==8 || t==12) cout<<"Thang co 31 ngay";
    else
        if (t==4 || t==6 || t==9 || t==11) cout<<"Thang co 30 ngay";
            else
                if ((n%400==0 || (n%4==0 && n%100!=0) )) cout<<"Thang co 29 ngay";
    else cout<<"Thang co 28 ngay";

}







