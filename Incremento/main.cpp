#include <iostream>

using namespace std;

int lect(){
    int num;
    cout << "Dame un numero" << endl;
    cin >> num;
    return num;
}

int aum(int num){
    return num + 15;
}

void resul(int sum){
    cout << "El numero incrementado es: " << sum << endl;
}

int main()
{
    cout << "Incremento:" << endl;
    int num;
    int sum;

    num = lect();
    sum = aum(num);
    resul(sum);

    //cout << "Hello world!" << endl;
    return 0;
}
