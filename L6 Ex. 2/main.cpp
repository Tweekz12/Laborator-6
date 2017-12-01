#include <iostream>
#include <math.h>
using namespace std;
int putere(int, int);
int main ()
{
    int x, y;
    cin>>x>>y;
    if (y>=0)
        cout<<x<<" la puterea a "<<y<<"-a este: "<<putere(x, y);
    else
        cout<<"Exponentul nu este un numar pozitiv!";
    return 0;
}
int putere(int a, int b)
{
    return pow(a, b);
}
