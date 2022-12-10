#include <iostream>
#include <iomanip>

using namespace std;

struct persona{
    int edad;
    string nombre;
    string apellido;
};

int main()
{
    /* Programa que introduce el tipo de dato struct*/
    int const maximum = 3;
    persona personas[maximum];

    for(int i = 0; i < maximum; i++){
        cout << "Dime tu nombre: ";
        cin >> personas[i].nombre;
        cout << "Dime tu apellido: ";
        cin >> personas[i].apellido;
        cout << "Dime tu edad: ";
        cin >> personas[i].edad;
    }

    cout << endl << endl;

    cout << "|" << left << setw(10) << "Nombre" << "|"<< setw(10) << "Apellido" << "|" << setw(10) << "Edad";
    for(int i = 0; i < maximum; i++){
        cout << endl << endl;


        cout << "|" << left << setw(10) << personas[i].nombre;
        cout << "|" << left << setw(10) << personas[i].apellido;
        cout << "|" << left << setw(10) << personas[i].edad << endl;
    }
    return 0;
}
