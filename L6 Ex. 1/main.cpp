#include <iostream>
using namespace std;
int suma(int a, int b);
int main ()
{
    int x, y;
    cin>>x>>y;
    cout<<"Suma celor doua numere este: "<<suma(x, y);
    return 0;
}
int suma(int a, int b)
{
    return a+b;
}
