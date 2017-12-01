#include <iostream>
using namespace std;
int cifre(int);
int main ()
{
    int x;
    cin>>x;
    cout<<"Numarul are "<<cifre(x)<<" cifre.";
    return 0;
}
int cifre(int a)
{
    int cf=0;
    while (a!=0)
    {
        a/=10;
        cf++;
    }
    return cf;
}
