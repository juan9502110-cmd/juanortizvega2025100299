#include <iostream>
#include <fstream>
#include <string>
#include <limits>

using namespace std;

struct personaje {
	string nombre;
	int vida ;
	int ataque ;
};

void registrarPersonaje (){
	personaje p;
	cout<<"\n------ Regristrar Personaje-----\n";
	cout<<"Nombre del personaje: ";
	getline(cin,p.nombre);
	
	cout<<"Puntos de vida: ";
	while(!(cin>>p.vida) || p.vida<0){
	cout<<"ingrese un numero entero o mayor a 0 para la vida";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
    
    cout << "Puntos de ataque: ";
    while (!(cin >> p.ataque) || p.ataque < 0) {
        cout << "Ingrese un numero entero igual o mayor que 0 para el ataque: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    ofstream archivo("personajes.txt", ios::app);
   
    if (!archivo.is_open()) {
        cout << "Error: no se pudo abrir el archivo para guardar.\n";
        return;
    }

    archivo << p.nombre << '\n'
            << p.vida << '\n'
            << p.ataque << '\n';

    archivo.close();
    cout << "Personaje guardado correctamente.\n";
}

void mostrarPersonajes() {
    ifstream archivo("personajes.txt");

    if (!archivo.is_open()) {
        cout << "\nNo se pudo abrir personajes.txt. Todavia no hay registros "
                "o el archivo no esta disponible.\n";
        return;
    }

    personaje p;
    int cantidad = 0;

    cout << "\n--- PERSONAJES GUARDADOS ---\n";

    while (getline(archivo, p.nombre)) {
        if (!(archivo >> p.vida >> p.ataque)) {
            cout << "Aviso: se encontro un registro incompleto o con formato incorrecto.\n";
            break;
        }

        archivo.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Nombre: " << p.nombre << '\n'
             << "Vida: " << p.vida << '\n'
             << "Ataque: " << p.ataque << "\n"
             << "--------------------------\n";
        cantidad++;
    }

    if (cantidad == 0) {
        cout << "No hay personajes registrados.\n";
    }

    archivo.close();
}

int main (){
    int opcion;
	
	do{
		cout << "\n===== SISTEMA DE PERSONAJES =====\n";
        cout << "[1] Registrar nuevo personaje\n";
        cout << "[2] Ver todos los personajes guardados\n";
        cout << "[3] Salir\n";
        cout << "Seleccione una opcion: ";
        
        if (!(cin >> opcion)) {
        	cout << "Opcion invalida. Ingrese 1, 2 o 3.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
          cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcion) {
            case 1:
                registrarPersonaje();
                break;
            case 2:
                mostrarPersonajes();
                break;
            case 3:
                cout << "Programa finalizado.\n";
                break;
            default:
                cout << "Opcion invalida. Seleccione 1, 2 o 3.\n";
        }
    } while (opcion != 3);

    return 0;

	}
	
	
	
	
		

