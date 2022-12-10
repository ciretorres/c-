#include <iostream>

using namespace std;

void imprimir(int op, float area){
    switch(op){
        case 1:
            cout << "El area del triangulo es: " << area << endl << endl;
            break;
        case 2:
            cout << "El area del cuadrado es: " << area << endl << endl;
            break;
        case 3:
            cout << "El area del circulo es: " << area << endl << endl;
    }
    return;
}

void triangulo(int op){
    float altura, base, area;

    cout << "Dame la altura: ";
    cin >> altura;
    cout << "Dame la base: ";
    cin >> base;

    area = base * altura / 2;

    imprimir(op, area);
    return;
}

void cuadrado(int op){
    float lado, area;

    cout << "Dame el lado: ";
    cin >> lado;

    area = lado * lado;

    imprimir(op, area);
    return;
}

void circulo(int op){
    float radio, area;
    const float PI = 3.1416;

    cout << "Dame el radio: ";
    cin >> radio;

    area = PI * radio * radio;

    imprimir(op, area);
    return;
}

int main()
{
    /* Programa que permita al usuario elegir entre 3 areas: circulo, cuadrados y triangulo
    Una a la vez; hasta que decida salir el usuario*/
    int op;

    do{
        cout<< "Areas Disponibles:"<<endl;
        cout<< "1. Triangulo"<<endl;
        cout<< "2. Cuadrado"<<endl;
        cout<< "3. Circulo"<<endl;
        cout<< "4. Salida"<<endl;
        cout<< "Elige una opcion: ";
        cin >> op;

        switch(op){
            case 1:
                triangulo(op);
                break;
            case 2:
                cuadrado(op);
                break;
            case 3:
                circulo(op);
                break;
            case 4:
                break;
            default:
                cout << "opciones validas 1..4" << endl << endl;
        }
    }while(op != 4);

    return 0;
}
