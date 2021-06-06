#include <iostream>
#include "rlutil.h"
using namespace std;
using namespace rlutil;
#include "funciones.h"

int main(){

    int opcion;
    char opcionSalida;



    int vPescador [15];
    int vEspecie [9];
    int vHora [18];
    float vKg [9];


  poner_cero(vPescador, 15);
  poner_cero(vEspecie, 9);
  poner_cero(vHora, 18);
  poner_cero(vKg, 9);




do {
cls ();
setColor (WHITE);
cout << " BRIAN LARA'S FISHING TOURNAMENT "<<endl;
cout << " --------------------------------"<<endl;
cout << " 1 - REGISTRAR CAPTURAS"<<endl;
cout << " 2 - REPORTE A"<<endl;
cout << " 3 - REPORTE B"<<endl;
cout << " 4 - REPORTE C"<<endl;
cout << " 5 - CREDITOS"<<endl;
cout << " --------------------------------"<<endl;
cout << " 0 - SALIR"<<endl<<endl;
cout << "> ";
cin >> opcion;

switch(opcion){
    case 1:
        registrar_exportaciones (vPescador, vEspecie, vHora, vKg);
        break;
    case 2:
        reporteAa(vPescador, 15);
        cout << endl;
        reporteAb (vKg, 15);

        break;
    case 3:
        reporteB (vEspecie, 9);
        break;
    case 4:
        reporteC (vHora, 18);
        break;
    case 5:
            cls ();
            setColor(BLUE);
            gotoxy(40,10);
            cout << " HECHO POR: AGUSTIN SANTILLAN"<<endl;
            gotoxy(40,12);
            cout << "www.github.com/agussantillan01";
        break;

    case 0:
        cls ();
        cout << "Estas seguro que quieres salir ? S/N";
        cin >> opcionSalida;
        if (opcion)
        break;

    default:
        cout<< " OPCION INCORRECTA";
        break;

    }
cin.ignore ();
anykey ();
}while (opcion !=0 );








    return 0;
}


