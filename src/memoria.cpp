#include <iostream>
using namespace std;
class Empleado{
    private://nace de la relacion tiene
    char nombre[10];
    int edad;
    char direccion[255];
    int telefono;
public:// nace de la relacion usa
    Empleado()
    
};
int main(int argc,char const *argv[])
{
    //Enteros
    cout << "Tamaño de int " << sizeof(int) << endl;
    cout << "Tamaño de long " << sizeof(long) << endl;
    //Punto Flotante
    cout << "Tamaño de float " << sizeof(float) << endl;
    cout << "Tamaño de double " << sizeof(double) << endl;
    //BYTES
    cout << "Tamño de char " << sizeof(char) << endl;
    cout << "Tamaño de byte " << sizeof(byte) << endl;
    cout << "Tamaño de bool " << sizeof(bool) << endl;
    //Puntero
    cout << "Tamaño de un puntero " << sizeof(int*) << endl;
    
    Empleado empleados[10]; //<-- 2730 bytes
    cout << "Tamaño de la clase Empleado " << sizeof(Empleado) << endl;//<-- 273 bytes
    cout << "Tamaño del arreglo empleados " << sizeof(empleados) << endl;//<-- 2730 bytes
    cout << "Empleados "<< empleados[0].LeerEdad() << endl;//<-- 10 empleados
    //casteos
    int a = 64;
    char b = (char)a;
    cout << "Valor de b " << b << endl;
    return 0;
}