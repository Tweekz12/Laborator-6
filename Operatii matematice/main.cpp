#include <iostream>
#include <stdlib.h>
using namespace std;
void showchoices ();
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);
int main ()
{
    float x, y;
    int choice;
    do
    {
        showchoices();
        cin>>choice;
        switch(choice)
        {
        case 1:
            system("cls");
            cout<<"Introduceti doua numere: ";
            cin>>x>>y;
            cout<<"Rezultatul adunarii celor doua numere este: "<<add(x, y)<<endl;
            cout<<endl;
            break;
        case 2:
            system("cls");
            cout<<"Introduceti doua numere: ";
            cin>>x>>y;
            cout<<"Rezultatul scaderii celor doua numere este: "<<subtract(x, y)<<endl;
            cout<<endl;
            break;
        case 3:
            system("cls");
            cout<<"Introduceti doua numere: ";
            cin>>x>>y;
            cout<<"Rezultatul inmultirii celor doua numere este: "<<multiply(x, y)<<endl;
            cout<<endl;
            break;
        case 4:
            system("cls");
            cout<<"Introduceti doua numere: ";
            cin>>x>>y;
            if (y!=0)
                cout<<"Rezultatul impartirii celor doua numere este: "<<divide(x, y)<<endl;
            else
                cout<<"Operatia nu poate fi efectuata!"<<endl;
            cout<<endl;
            break;
        case 5:
            system("cls");
            break;
        default:
            cout<<"Introduceti o operatie valida!"<<endl;
            cout<<endl;
        }
    }
    while (choice!=5);
    return 0;
}
void showchoices()
{
    cout<<"MENU"<<endl;
    cout<<"1. Adunare "<<endl;
    cout<<"2. Scadere "<<endl;
    cout<<"3. Inmultire "<<endl;
    cout<<"4. Impartire "<<endl;
    cout<<"5. Iesire "<<endl;
    cout<<endl;
    cout<<"Introduceti operatia pe care doriti sa o efectuati: ";
}
float add(float a, float b)
{
    return a+b;
}
float subtract(float a, float b)
{
    return a-b;
}
float multiply(float a, float b)
{
    return a*b;
}
float divide(float a, float b)
{
    return a/b;
}
