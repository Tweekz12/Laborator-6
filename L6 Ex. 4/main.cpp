#include <iostream>
using namespace std;
int invers(int a, int b)
{
    while (a>0)
    {
        b=b*10+a%10;
        a=a/10;
    }
    return b;
}
int main ()
{
    int x;
    cin>>x;
    int y=0;
    cout<<"Inversul lui x este: "<<invers(x, y);
    return 0;
}
