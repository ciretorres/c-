#include <iostream>

using namespace std;

void leer(int &a, int &b){
    cin >> a;
    cin >> b;

    return;
}

void imprimir(int a, int b){
    if(a <= b){
        //int i;
        //i = a;

//        while(i <= b){
//            cout << i << " ";
//            // i = i = 1;
//            i++;
//        }

//        do{
//            cout << i << " ";
//            i = i + 1;
//        }while(i<=b);

        for(int i = a; i <= b; i++){
            cout << i << " ";
        }

    } else {
        cout << "no" << endl;
    }

    return;
}

int main()
{
    int a = 0;
    int b = 0;

    leer(a, b);

    //cout << "Limite inferior: " << a << "Limite superior: " << b << endl;
    imprimir(a, b);

    return 0;
}
