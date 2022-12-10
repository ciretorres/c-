#include <iostream>

using namespace std;

void lect(int &num){
    //int num;
    cout << "Dame un numero" << endl;
    cin >> num;
    //return num;
}

void aum(int num, int &sum){
    sum = num + 15;
    //return sum;
}

void resul(int sum){
    cout << "El numero incrementado es: " << sum << endl;
}

int main()
{
    cout << "Incremento por referencia:" << endl;
    int num;
    int sum;

    //num = lect();
    lect(num);
    aum(num, sum);
    resul(sum);

    //cout << "Hello world!" << endl;
    return 0;
}
