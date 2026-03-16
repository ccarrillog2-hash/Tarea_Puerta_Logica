#include <iostream>
#include <string>

using namespace std;

int main()
{
    string nombre;
    int edad;
    float promedio;
    int clubprogramacion;

    cout<<"Ingrese su nombre: ";
    getline(cin,nombre);

    cout<<"Ingrese su edad: ";
    cin>>edad;

    cout<<"Ingrese promedio academico: ";
    cin>>promedio;

    cout<<"Pertenece al club de programacion? (1=Si, 0=No): ";
    cin>>clubprogramacion;

    if(nombre == "David Alvarez") {
        cout << "Acceso especial concedido." << endl;
    }

    else if(edad >= 18 && promedio >= 85) {
        cout << "Bienvenido " << nombre << "." << endl;
        cout << "Acceso autorizado." << endl;
    }
    else if(clubprogramacion == 1 && promedio >= 75) {
        cout << "Bienvenido " << nombre << "." << endl;
        cout << "Acceso autorizado." << endl;
    }
    else if(promedio >= 95) {
        cout << "Bienvenido " << nombre << "." << endl;
        cout << "Acceso autorizado." << endl;
    }
    else {
        cout << "Acceso denegado." << endl;
    }
    return 0;
}