#include <iostream>

using namespace std;

int main()
{
    char a;
    cin>>a;
    if (a>='a' && a<='z') cout<<"La chu thuong"<<endl;
        else if (a>='A'&& a<='Z') cout<<"La chu hoa"<<endl;
            else if (a>='1' && a<='9') cout<<"La chu so"<<endl;
                else cout<<"La ky tu khac"<<endl;


    return 0;
}
