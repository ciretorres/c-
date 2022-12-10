#include <iostream>
//#include <time.h>

using namespace std;

//const int maximum = 4;
int const maximum = 20;

void lectura(int num[]){
    //srand(time(NULL));
    cout << "Numeros a ordenar:" << endl;
    for(int i = 0; i < maximum; i++){
        num[i] = rand() % 100 + 1;
        cout << num[i] << " ";
    }
}

void inicializa(int id[]){
    for(int i = 0; i < maximum; i++){
        id[i] = i;
        //cout << num[i] << " ";
    }
}

void ordena_iteracion_fija(int num[]){
    int aux;
    //int tam = sizeof(num)/sizeof(num[0]);
    int tam = maximum;

    for(int i = 0; i < tam; i++){
        for(int j = 0; j < tam; j++){

            if(num[j] > num[j+1]){

                aux = num[j];
                num[j] = num[j+1];
                num[j+1] = aux;

            }
        }
    }
}

void ordena_iteracion_condicional(int num[], int id[]){
    bool cambio;
    int i, aux;
    //int tam = sizeof(num)/sizeof(num[0]);
    int tam = maximum;

    i = 0;
    do{
        // Centinela o cazador de bruja que capture u observe
        cambio = false; // nos indica si se ha ejecutado un cambio en el conjunto de numeros
        for(int j = (tam-1); j > i; j = j-1){

            //if(num[j] < num[j-1]){
            if(num[id[j]] < num[id[j-1]]){

                //aux = num[j-1];
                aux = id[j-1];
                //num[j-1] = num[j];
                id[j-1] = id[j];
                //num[j] = aux;
                id[j] = aux;
                cambio = true;
            }
        }
        i = i + 1;
    }while((cambio == true) && (i < tam));

    cout << endl << "veces: " << i << endl;
}

void imprime(int const num[], int const id[]){
    cout << endl << "Numeros ordenados:" << endl;

    for(int i = 0; i <= maximum-1; i++){
        //cout << num[i] << " ";
        cout << num[id[i]] << "-" << id[i] << " ";
    }
}

int main()
{
    /* Programa que ordena en forma de burbuja los numeros de un arreglo*/
    //int num[] = {10, 2, 5, 7};
    int num[maximum];
    int id[maximum];

    lectura(num);

    inicializa(id);

    //ordena_iteracion_fija(num);
    ordena_iteracion_condicional(num, id);

    imprime(num, id);

    return 0;
}
