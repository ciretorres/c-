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

float triangulo(float base, float altura){
    float area;

    area = base * altura / 2;

    return area;
}

float cuadrado(float lado){
    float area;

    area = lado * lado;

    return area;
}

float circulo(float radio){
    float area;
    const float PI = 3.1416;

    area = PI * radio * radio;

    return area;
}

int main()
{
    /* Programa que permita al usuario elegir entre 3 areas: circulo, cuadrados y triangulo
    Una a la vez; hasta que decida salir el usuario*/
    int op;
    float base, altura, area, lado, radio;

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
                cout << "Dame la altura: ";
                cin >> altura;
                cout << "Dame la base: ";
                cin >> base;
                area = triangulo(base, altura);
                imprimir(op, area);
                break;
            case 2:
                cout << "Dame el lado: ";
                cin >> lado;
                area = cuadrado(lado);
                imprimir(op, area);
                break;
            case 3:
                cout << "Dame el radio: ";
                cin >> radio;
                area = circulo(radio);
                imprimir(op, area);
                break;
            case 4:
                break;
            default:
                cout << "opciones validas 1..4" << endl << endl;
        }
    }while(op != 4);

    return 0;
}
