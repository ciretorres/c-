#include <iostream>

using namespace std;

void lect(int &numCha){
    cout << "Cuantas chamarras quieres comprar:" << endl;
    cin >> numCha;
}

void calcula(int numCha, float &costTot){
    // Abstraccion procedimental con parametro por valor y referencia
    if(numCha >= 10){
        costTot = 400 * numCha;
    } else {
        if(numCha >= 5){
            costTot = 420 * numCha;
        } else {
            if(numCha < 5){
                costTot = 440 * numCha;
            }
        }
    }
}

//int calcula(int numCha){
//    // Abstraccion funcional con parametro por valor
//    float costTot;
//    if(numCha >= 10){
//        costTot = 400 * numCha;
//    } else {
//        if(numCha >= 5 && numCha < 10){
//            costTot = 420 * numCha;
//        } else {
//            if(numCha < 5){
//                costTot = 440 * numCha;
//            }
//        }
//    }
//    return costTot;
//}

void costoTotal(int numCham, int costTot){
    cout << "Costo de: " << numCham << " chammarras es: " << costTot << endl;
}

int main()
{
    cout << "El costo de las chamarras:" << endl;

    int numCha;
    float costTot;

    lect(numCha);
    calcula(numCha, costTot);
    //costTot = calcula(numCha);
    costoTotal(numCha, costTot);

    return 0;
}
