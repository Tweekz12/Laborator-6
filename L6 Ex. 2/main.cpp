#include <iostream>
using namespace std;
int putere(int a, int b)
{
    if (b==0)
        return 1;
    else if (b>1)
        return a*putere(a, b-1);
}
int main ()
{
    int x, y;
    cin>>x>>y;
    if (y>=0)
        cout<<x<<" la puterea a "<<y<<"-a este: "<<putere(x, y);
    else
        cout<<"Exponentul nu este pozitiv.";
    return 0;
}
