#include <iostream>

using namespace std;

void s_wap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "Al final y dentro de swap: i= " << a << " j= " << b << endl;
}

int main()
{
    cout << "Paso de parametros por valor:" << endl;
    int i = 421, j = 53;
    cout << "antes: i= " << i << " j= " << j << endl;
    s_wap(i, j);
    cout << "despues: i= " << i << " j= " << j << endl;
    //cout << "Hello world!" << endl;
    return 0;
}
