#include <iostream>
using namespace std;
int main()
{
    // declarar variables
    float horas = 0;
    float horas_b, horas_e, salario_neto, impuesto, salario_liquido;
    string nombre;

    // datos de entrada:
    cout << "ingrese nombre ";
    cin >> nombre;
    cout << "ingrese horas trabajadas en el mes ";
    cin >> horas;

    // calculo de salario neto , sin impuestos
    if (horas < 160 && horas > 0)
    {
        horas_b = horas;
        horas_e = 0;
    }
    else
    {
        horas_b = 160;
        horas_e = horas - 160;
    }
    salario_neto = horas_b * 10 + horas_e * 10 * 1.5;
    if (salario_neto <= 2000)
    {
        impuesto = salario_neto * 0;
    }
    else if (salario_neto > 2000 && salario_neto < 2200)
    {
        impuesto = salario_neto * 0.2;
    }
    else
    {
        impuesto = salario_neto * 0.3;
    }
    // salidas
    cout << "hola ," << nombre << "sus datos de salario son : \n";
    cout << "\tSalario neto :\t\t" << salario_neto;
    cout << "\n\tImpuesto:\t\t" << impuesto;
    cout << "\n\tSalario liquido:\t " << salario_neto - impuesto << "\n";

    return 0;
}
