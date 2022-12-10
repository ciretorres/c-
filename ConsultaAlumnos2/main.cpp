#include <iostream>
#include <fstream>

using namespace std;

void leer(string mat[100], string nombre[100], int edad[100], string consultas[10], int &n, int &m){
    /* Procedimiento que obtiene parametros por valor y referencia */
    cout << "Leeyendo alumnos.txt" << endl << "..."  << endl;

    // in file stream
    ifstream ent;
//
    //ent.open("alumnos.txt", ifstream::in);
    ent.open("alumnos.txt");

    ent >> n;
//    cout<<"The score is "<<ent<<endl;

    for(int i = 0; i < n; i++){
        //ent >> mat[i];
        //cout << ent << endl;

        //cin >> nombre[i];
        //getline(ent, nombre[i]);

        //ent >> edad[i];

    }

    //ent >> m;

    for(int i = 0; i < m; i++){
      //  ent >> consultas[i];
    }

    //ent.close();

    return;
}

void imprimir(string mat[100], string nombre[100], int edad[100], string consultas[10], int &n, int &m){
//                  ofstream out;
//
//                  out.open("resultados.txt", ofstream::out);
//
//                  for(int i = 0; i < m; i++){
//                    string consulta_actual = consultas[i];
//
//                    bool encontrado = false;
//
//                    for(int j = 0; j < n; j++){
//                        if(consulta_actual == mat[j]){
//                            out << mat[j] << endl;
//                            out << nombre[j] << endl;
//                            out << edad[j] << endl;
//                            out << endl;
//                            encontrado = true;
//                            j = n;
//                        }
//
//                    }
//
//                    if(encontrado == true){
//
//                    } else {
//                        cout << "matricula no encontrada" << endl << endl;
//                    }
//                  }
}

int main()
{
    /* Programa que lee los datos de n alumnos (matricula, nombre y edad)*/

//    string matricula[100];
//    string nombre[100];
//    int edad[100];
//    string consultas[10];
//    int n, m;
//
//
//    leer(matricula, nombre, edad, consultas, n, m);
//    //imprimir(matricula, nombre, edad, consultas, n, m);


    ifstream fin;
    fin.open("alumnos.txt");
    int score;

    fin >> score;
    cout << "The score is "<< score << endl;

    return 0;
}
