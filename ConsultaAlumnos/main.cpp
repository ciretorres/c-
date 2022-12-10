#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

//void leer(string mat[100], string nombre[100], int edad[100], string consultas[10], int &n, int &m){
//    /* Procedimiento que obtiene parametros por valor y referencia */
//    cout << "Leeyendo alumnos.txt" << endl << "..."  << endl;
//
//    // in file stream
//    ifstream ent;
////
//    //ent.open("alumnos.txt", ifstream::in);
//    ent.open("alumnos.txt");
//
//    ent >> n;
////    cout<<"The score is "<<ent<<endl;
//
//    for(int i = 0; i < n; i++){
//        //ent >> mat[i];
//        //cout << ent << endl;
//
//        //cin >> nombre[i];
//        //getline(ent, nombre[i]);
//
//        //ent >> edad[i];
//
//    }
//
//    //ent >> m;
//
//    for(int i = 0; i < m; i++){
//      //  ent >> consultas[i];
//    }
//
//    //ent.close();
//
//    return;
//}

void leer(vector <string> &vMatriculas, vector <string> &vNombres, vector <string> &vEdades){
    ifstream ent;
    ent.open("alumnos.txt");
    string matricula, nombre, edad;
    //vector <string> vMatriculas, vNombres, vEdades;

    cout << "Registros del archivo alumnos.txt" << endl << endl;
    ent >> matricula;
    while(!ent.eof()){
        ent >> nombre;
        ent >> edad;
        vMatriculas.push_back(matricula);
        vNombres.push_back(nombre);
        vEdades.push_back(edad);
//        cout << "Matricula " <<matricula<<endl;
//        cout << "Nombre " <<nombre<<endl;
//        cout << "Edad " <<edad<<endl;
        ent >> matricula;
    }

    ent.close();

    return;
}

void imprimir(vector <string> &vMatriculas, vector <string> &vNombres, vector <string> &vEdades){
    ofstream out;
    out.open("resultados.txt");

    cout << "Consulta: ";
    string consulta;
    bool encontrado = false;
    cin >> consulta;

    for(int i = 0; i < vMatriculas.size(); i++){
        if(consulta == vMatriculas[i]){
            out << vMatriculas[i] << endl;
            out << vNombres[i] << endl;
            out << vEdades[i] << endl << endl;
            encontrado = true;
        }
    }
    if(encontrado == true){

    } else {
        out << "No existe la matricula" << endl;
    }

    out.close();

    return;
}

//void imprimir(string mat[100], string nombre[100], int edad[100], string consultas[10], int &n, int &m){
////                  ofstream out;
////
////                  out.open("resultados.txt", ofstream::out);
////
////                  for(int i = 0; i < m; i++){
////                    string consulta_actual = consultas[i];
////
////                    bool encontrado = false;
////
////                    for(int j = 0; j < n; j++){
////                        if(consulta_actual == mat[j]){
////                            out << mat[j] << endl;
////                            out << nombre[j] << endl;
////                            out << edad[j] << endl;
////                            out << endl;
////                            encontrado = true;
////                            j = n;
////                        }
////
////                    }
////
////                    if(encontrado == true){
////
////                    } else {
////                        cout << "matricula no encontrada" << endl << endl;
////                    }
////                  }
//}

int main()
{
    /* Programa que lee*/
//    string matricula[100];
//    string nombre[100];
//    int edad[100];
//    string consultas[10];
//    int n, m;
//
//    leer(matricula, nombre, edad, consultas, n, m);
//    imprimir(matricula, nombre, edad, consultas, n, m);
    vector <string> vMatriculas, vNombres, vEdades;

    leer(vMatriculas, vNombres, vEdades);
    imprimir(vMatriculas, vNombres, vEdades);

    return 0;
}
