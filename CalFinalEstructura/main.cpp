#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int const maximum = 3;

typedef struct {
    string nombre; // Nombre del alumno
    double tareas; // Calificacion de tareas
    double programas; // Claificacion de programas
    double examenes; // Calificacion de examenes
    double total; // Calificacion total o final
} Alumno;

void lectura(Alumno grupo[], int &comp){
    Alumno nuevo;
    int op;
    comp = 0;

    do{
        cout << "Dame el nombre del estudiante: " << comp + 1 << endl;
        cin >> nuevo.nombre;

        cout << "Dame la calificacion de tareas: " << endl;
        cin >> nuevo.tareas;

        cout << "Dame la calificacion de programas: " << endl;
        cin >> nuevo.programas;

        cout << "Dame la calificacion de examenes: " << endl;
        cin >> nuevo.examenes;

        nuevo.total = 0.0;
        grupo[comp] = nuevo;
        //comp++;

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
        cout << endl <<
        "Ya no se permiten mas alumnos porque el numero maximo es " << comp << endl << endl;
        comp = comp - 1;
    }
}

void calcula(Alumno grupo[], int comp){
    for(int i = 0; i <= comp; i++){
        grupo[i].total = grupo[i].tareas * 0.1 + grupo[i].programas * 0.4 + grupo[i].examenes * 0.5;
    }
}

// Aqui procedimiento inicializa
void inicializa(int id[]){
    for(int i = 0; i < maximum; i++){
        id[i] = i;
        //cout << num[i] << " ";
    }
}

//bool compc(string a, string b){
//    int aux = min(b.size(), a.size());
//    for(int i = 0; i < aux; i++){
//        char a0, b0;
//        a0 = a[i];
//        b0 = b[i];
//        if(b0 < a0){
//            return true;
//        }
//    }
//    return false;
//}

// Aqui procedimiento ordenamiento burbuja
void ordena_iteracion_condicional(Alumno num[], int id[], int comp){
    bool cambio;
    int i, aux;
    //int tam = sizeof(num)/sizeof(num[0]);
    //int tam = maximum;
    int tam = comp;
    //Alumno mient;
    inicializa(id);

    i = 0;
    do{
        // Centinela o cazador de bruja que capture u observe
        cambio = false; // nos indica si se ha ejecutado un cambio en el conjunto de numeros
        for(int j = (tam); j > i; j = j-1){
            //mient = num[j];

            //if(num[j] < num[j-1]){
            if(num[id[j]].nombre < num[id[j-1]].nombre){
            //if(compc(num[id[j]].nombre, num[id[j-1]].nombre)){

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

    //cout << endl << "veces: " << i << endl;
}

void impCal(const Alumno grupo[], int comp, int const id[]){
    Alumno mient;

    cout << left << setw(30) << "Nombre" << setw(10) << "Tareas" << setw(10) << "Programas";

    cout << setw(10) << "Examenes" << setw(10) << "Final" << endl;

    for(int i = 0; i <= comp; i++){
        mient = grupo[id[i]];
        cout << left <<
//        setw(30) << grupo[i].nombre <<
//        setw(10) << grupo[i].tareas <<
//        setw(10) << grupo[i].programas <<
//        setw(10) << grupo[i].examenes <<
//        setw(10) << grupo[i].total << endl;
        setw(30) << mient.nombre <<
        setw(10) << mient.tareas <<
        setw(10) << mient.programas <<
        setw(10) << mient.examenes <<
        setw(10) << mient.total << endl;
    }
}

int main()
{
    /* Programa que obtiene la calificacion final de un grupo de alumnos*/
    Alumno grupo[maximum];
    int id[maximum];

    int comp;

    lectura(grupo, comp);

    calcula(grupo, comp);

    // Aqui inicializa id
    //inicializa(id);

    // Aqui llama a ordenamiento burbuja
    ordena_iteracion_condicional(grupo, id, comp);

    impCal(grupo, comp, id);

    return 0;
}
