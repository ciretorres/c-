#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int const maximum = 3;

void lectura(string nombre[], float cal_tar[], float cal_pro[], float cal_exa[], int &comp){
    int op;
    comp = 0;

    do{
        cout << "Dame el nombre del estudiante: " << comp + 1 << endl;
        cin >> nombre[comp];
        //getLine(cin, nombre[comp]);

        cout << "Dame la calificacion de tareas: " << endl;
        cin >> cal_tar[comp];

        cout << "Dame la calificacion de programas: " << endl;
        cin >> cal_pro[comp];

        cout << "Dame la calificacion de examenes: " << endl;
        cin >> cal_exa[comp];

        cout << "Hay mas alumnos" << endl << "1. SI     2. NO" << endl;
        do{
            cin >> op;
            if(op !=1 && op != 2){
                cout << "Opciones validas:      1. SI    2. NO" << endl;
            }
        }while(op!=1 && op != 2);

        if(op == 1){
            comp++;
        }

    }while(op != 2 && comp < maximum);

    if(comp == maximum){
        cout << "Ya no se permiten mas alumnos porque el numero maximo es " << comp << endl;
        comp = comp - 1;
    }
}

void calcula(float const cal_tar[], float const cal_pro[], float const cal_exa[], int comp, float cal_fin[]){
    for(int i = 0; i <= comp; i++){
        cal_fin[i] = cal_tar[i] * 0.1 + cal_pro[i] * 0.4 + cal_exa[i] * 0.5;
    }
}

//float calcula(float const cal_tar[], float const cal_pro[], float const cal_exa[], int comp){
//    float cal_fin[maximum];
//
//    for(int i = 0; i <= comp; i++){
//        cal_fin[i] = cal_tar[i] * 0.1 + cal_pro[i] * 0.4 + cal_exa[i] * 0.5;
//    }
//    return cal_fin;
//}

void impCal(string const nombre[], float const cal_tar[], float const cal_pro[], float const cal_exa[], float const cal_fin[], int comp){
    cout << left << setw(30) << "Nombre" << setw(10) << "Tareas" << setw(10) << "Programas";

    cout << setw(10) << "Examenes" << setw(10) << "Final" << endl;

    for(int i = 0; i <= comp; i++){
        cout << left << setw(30) << nombre[i] << setw(10) << cal_tar[i] << setw(10) << cal_pro[i] << setw(10) << cal_exa[i] << setw(10) << cal_fin[i] << endl;
    }
}

int main()
{
    /* Programa que obtiene la calificacion final de un grupo de alumnos*/
    string nom[maximum];
    float caTa[maximum];
    float caPro[maximum];
    float caEx[maximum];

    float caFi[maximum];

    int comp;

    lectura(nom, caTa, caPro, caEx, comp);

    calcula(caTa, caPro, caEx, comp, caFi);
    // caFi = calcula(caTa, caPro, caEx, comp);

    impCal(nom, caTa, caPro, caEx, caFi, comp);

    return 0;
}
