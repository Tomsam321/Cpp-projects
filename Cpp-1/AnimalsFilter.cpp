#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Mamifero {
private:
    string nombre;
    string colorPelo;
    int cantidadDientes;

public:
    Mamifero(string n, string c, int d) : nombre(n), colorPelo(c), cantidadDientes(d) {}

    void mostrarDatos() {
        cout << "Mamífero: " << nombre << endl;
        cout << "Color de pelo: " << colorPelo << endl;
        cout << "Cantidad de dientes: " << cantidadDientes << endl;
    }

    void cambiarColorPelo(string nuevoColor) {
        colorPelo = nuevoColor;
    }
};

class Ave {
private:
    string nombre;
    string tipoPlumas;
    bool puedeVolar;

public:
    Ave(string n, string p, bool v) : nombre(n), tipoPlumas(p), puedeVolar(v) {}

    void mostrarDatos() {
        cout << "Ave: " << nombre << endl;
        cout << "Tipo de plumas: " << tipoPlumas << endl;
        cout << "Puede volar: " << (puedeVolar ? "Sí" : "No") << endl;
    }

    void cambiarTipoPlumas(string nuevoTipo) {
        tipoPlumas = nuevoTipo;
    }
};

class Reptil {
private:
    string nombre;
    string tipoEscamas;
    bool esVenenoso;

public:
    Reptil(string n, string e, bool v) : nombre(n), tipoEscamas(e), esVenenoso(v) {}

    void mostrarDatos() {
        cout << "Reptil: " << nombre << endl;
        cout << "Tipo de escamas: " << tipoEscamas << endl;
        cout << "Es venenoso: " << (esVenenoso ? "Si" : "No") << endl;
    }

    void cambiarTipoEscamas(string nuevoTipo) {
        tipoEscamas = nuevoTipo;
    }
};

class Inicio {
private:
    vector<Mamifero> mamiferos;
    vector<Ave> aves;
    vector<Reptil> reptiles;

public:
    void ejecutar() {
        cout << "Ingrese datos para dos mamiferos:" << endl;
        for(int i = 0; i < 2; i++) {
            string nombre, colorPelo;
            int cantidadDientes;
            cout << "Mamifero " << (i+1) << ":" << endl;
            cout << "Nombre: ";
            cin >> nombre;
            cout << "Color de pelo: ";
            cin >> colorPelo;
            cout << "Cantidad de dientes: ";
            cin >> cantidadDientes;
            mamiferos.push_back(Mamifero(nombre, colorPelo, cantidadDientes));
        }

        cout << "\nIngrese datos para dos aves:" << endl;
        for(int i = 0; i < 2; i++) {
            string nombre, tipoPlumas;
            bool puedeVolar;
            cout << "Ave " << (i+1) << ":" << endl;
            cout << "Nombre: ";
            cin >> nombre;
            cout << "Tipo de plumas: ";
            cin >> tipoPlumas;
            cout << "Puede volar (1 para Si, 0 para No): ";
            cin >> puedeVolar;
            aves.push_back(Ave(nombre, tipoPlumas, puedeVolar));
        }

        cout << "\nIngrese datos para dos reptiles:" << endl;
        for(int i = 0; i < 2; i++) {
            string nombre, tipoEscamas;
            bool esVenenoso;
            cout << "Reptil " << (i+1) << ":" << endl;
            cout << "Nombre: ";
            cin >> nombre;
            cout << "Tipo de escamas: ";
            cin >> tipoEscamas;
            cout << "Es venenoso (1 para Si, 0 para No): ";
            cin >> esVenenoso;
            reptiles.push_back(Reptil(nombre, tipoEscamas, esVenenoso));
        }

        cout << "\n=== Mamiferos ===\n";
        for(auto& m : mamiferos) {
            m.mostrarDatos();
            cout << endl;
        }

        cout << "\n=== Aves ===\n";
        for(auto& a : aves) {
            a.mostrarDatos();
            cout << endl;
        }

        cout << "\n=== Reptiles ===\n";
        for(auto& r : reptiles) {
            r.mostrarDatos();
            cout << endl;
        }

        if(!mamiferos.empty()) {
            cout << "\n--- Cambiando color de pelo del primer mamifero ---\n";
            string nuevoColor;
            cout << "Nuevo color de pelo: ";
            cin >> nuevoColor;
            mamiferos[0].cambiarColorPelo(nuevoColor);
            mamiferos[0].mostrarDatos();
        }

        if(!aves.empty()) {
            cout << "\n--- Cambiando tipo de plumas de la primera ave ---\n";
            string nuevoTipo;
            cout << "Nuevo tipo de plumas: ";
            cin >> nuevoTipo;
            aves[0].cambiarTipoPlumas(nuevoTipo);
            aves[0].mostrarDatos();
        }

        if(!reptiles.empty()) {
            cout << "\n--- Cambiando tipo de escamas del primer reptil ---\n";
            string nuevoTipo;
            cout << "Nuevo tipo de escamas: ";
            cin >> nuevoTipo;
            reptiles[0].cambiarTipoEscamas(nuevoTipo);
            reptiles[0].mostrarDatos();
        }
    }
};

int main() {
    Inicio programa;
    programa.ejecutar();
    return 0;
}
