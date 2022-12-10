#include <iostream>
#include <string>

using namespace std;

enum meses{ Default,
    Enero, Febrero, Marzo, Abril, Mayo,
    Junio, Julio, Agosto, Septiembre,
    Octubre, Noviembre, Diciembre
};

enum diasSemana{
    Lunes = 100, Martes = 100, Miercoles = 100,
    Jueves = 100, Viernes = 100, Sabado = 100, Domingo = 100
};

int main()
{
    cout << "Hello world!" << endl;
    //int suma = Enero + Diciembre;
    string diasFestivos[31][12];

    diasFestivos[2][Noviembre] = "Dia de muertos";

    return 0;
}
