#include <iostream>

using namespace std;

int lect(int num){
    //int num;
    cout << "Dame un numero" << endl;
    cin >> num;
    return num;
}

int aum(int num, int sum){
    sum = num + 15;
    return sum;
}

void resul(int sum){
    cout << "El numero incrementado es: " << sum << endl;
}

int main()
{
    cout << "Incremento por valor:" << endl;
    int num;
    int sum;

    num = lect(num);
    sum = aum(num, sum);
    resul(sum);

    //cout << "Hello world!" << endl;
    return 0;
}
