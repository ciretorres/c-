#include <iostream>

using namespace std;

const int maximum = 10;

void lectura(int num[]){

    cout << "Dame 10 numeros enteros" << endl << endl;

    for(int cont = 1; cont <= maximum; cont++){
        //cout << "Dame el numero entero " << endl;
        //cin >> num[cont];
        num[cont] = rand();
        cout << "Dame el numero entero " << cont << " " << num[cont] << endl;
    }
}

void cuenta(int num[], int &may, int &noVec, int pos[]){
    may = num[0];
    noVec = 0;

    for(int inicio = 1; inicio <= maximum; inicio++){
        if(num[inicio] > may){
            may = num[inicio];
        }
    }

    for(int inicio = 0; inicio <= maximum; inicio++){
        if(num[inicio] == may){
            noVec = noVec + 1;
            pos[noVec] = inicio;
        }
    }
}

void muestra(int may, int noVec, int pos[]){
    cout << "El numero mayor es " << may << endl;

    cout << "Aparece un numero de " << noVec << " veces" << endl;

    cout << "Aparece en las siguientes posiciones ";
    for(int contador = 1; contador <= noVec; contador++){
        cout << pos[contador] << " ";
    }
}

int main()
{
    /* Programa que encuentra el mayor numero de 10 enteros*/
    int num[10];
    int may;
    int noVec;
    int pos[10];

    lectura(num);

    cuenta(num, may, noVec, pos);

    muestra(may, noVec, pos);

    return 0;
}
