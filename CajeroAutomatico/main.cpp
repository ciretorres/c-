#include <iostream>

using namespace std;

void consulta(int saldo){
    cout << "$" << saldo << endl << endl;
}

void deposita(int &saldo){
    int d;
    cin >> d;
    while((saldo + d) >= 5000){
        //cout << "El monto maximo son $5000 \nMonto actual: $" << saldo <<endl;
        cin >> d;
    }
    saldo = saldo + d;
}

void retira(int &saldo){
    int r;
    cin >> r;
    while((saldo - r) <= -5000){
        //cout << "El monto minimo son -$5000 \nMonto actual: $" << saldo <<endl;
        cin >> r;
    }
    saldo = saldo - r;
}

int main()
{
    /* Programa que simule un cajero automatico*/
    int saldo = 1000;
    char op = ' ';
    int n = 0;

    do{
        cout<< "Opciones Disponibles:"<<endl;
        cout<< "R. Retirar"<<endl;
        cout<< "D. Depositar"<<endl;
        cout<< "C. Consultar"<<endl;
        cout<< "S. Salir"<<endl;
        cout<< "Elige una opcion: ";
        cin >> op;

        switch(op){
            case 'R':
                retira(saldo);
                break;
            case 'D':
                deposita(saldo);
                break;
            case 'C':
                consulta(saldo);
                break;
            case 'S':
                break;
            default:
                cout << "opciones validas R..S" << endl << endl;
        }
        n = n + 1;

    }while(op != 'S' && n <= 10);

    return 0;
}
