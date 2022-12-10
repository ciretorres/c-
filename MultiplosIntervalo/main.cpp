#include <iostream>

using namespace std;

void leer(int &a, int &b){
    cin >> a;
    cin >> b;
}

void imprimir(int a, int b){
    if(a <= b){

        for(int i = a; i <= b; i++){
            if(i % a == 0){
                cout << i << " ";
            }
        }

    } else {
        cout << "no" << endl;
    }
}

int main()
{
    /* Programa que imprime todos los multiplos enteros que hay desde a hasta b*/
    int a, b = 0;

    leer(a, b);
    imprimir(a, b);


    return 0;
}
