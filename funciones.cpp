#include <iostream>
#include "rlutil.h"
using namespace std;
using namespace rlutil;
#include "funciones.h"
            // RESOLUCIONES

void poner_cero(float vec[], int tam){
    int i;
    for (i=0; i<tam; i++){
        vec[i]=0;
    }

}

void poner_cero(int vec[], int tam){
    int i;
    for (i=0; i<tam; i++){
        vec[i]=0;
    }

}
//********************** REGISTRO ************************

void registrar_exportaciones (int vPescador[], int vEspecie[], int vHora[], float vKg[]){
    int pescador, especie, hora;
    float kg;
    cls ();
    cout<< "CARGA DE REGISTROS" << endl<< "...................."<<endl;
    cout << "CODIGO DE PESCADOR: "<<endl<<"> ";
    cin >> pescador;
    while (pescador>=100 && pescador <=114){

    cout << "CODIGO DE ESPECIE: "<<endl<<"> ";
    cin >> especie;

    switch (especie){
    case 10:
        cout << "Anchoa"<<endl;
        break;
    case 20:
        cout << "Pejerrey"<<endl;
        break;
    case 30:
        cout << "Bagre"<<endl;
        break;
    case 40:
        cout << "Boga"<<endl;
        break;
    case 50:
        cout << "Caballa"<<endl;
        break;
    case 60:
        cout << "Carpa"<<endl;
        break;
    case 70:
        cout << "Trucha Patagonica"<<endl;
        break;
    case 80:
        cout << "Dorado"<<endl;
        break;
    case 90:
        cout << "Lisa"<<endl;
        break;
    default:
        setColor (RED);
        cout << "ERROR CODIGO INCORRECTO"<< endl;
        cout<< "Intente con otro codigo de especie: "<<endl;
        setColor (WHITE);
        cout << "> ";
        cin>> especie;
        setColor (WHITE);
        break;
    }
    cout << "HORA: "<<endl<<"> ";
    cin >> hora;

   if (hora>= 6 && hora <= 23){
        cout << "KILOGRAMOS: "<<endl<<"> ";
        cin >> kg;
        switch(especie){
 case 10:
     if (kg>0.5){
        vHora [hora-6]++; //Acumula las veces capturadas POR HORA
        vPescador[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve la posicion max (reporteAa)
        vKg[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve los kg max (reporteAb)
        vEspecie[(especie/10)-1]++; // cuenta cuantas veces fue capturado cada pescado
     }
     else {
    setColor (RED);
     cout << endl<< "El peso minimo es de 0.5 Kg"<<endl;
     setColor (WHITE);
     }
     break;
 case 20:
     if (kg>2){
        vHora [hora-6]++; //Acumula las veces capturadas POR HORA
        vPescador[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve la posicion max (reporteAa)
        vKg[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve los kg max (reporteAb)
        vEspecie[(especie/10)-1]++; // cuenta cuantas veces fue capturado cada pescado
     }
          else {
    setColor (RED);
     cout << endl<< "El peso minimo es de 2 Kg"<<endl;
     setColor (WHITE);
     }

     break;
 case 30:
     if (kg>4){
        vHora [hora-6]++; //Acumula las veces capturadas POR HORA
        vPescador[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve la posicion max (reporteAa)
        vKg[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve los kg max (reporteAb)
        vEspecie[(especie/10)-1]++; // cuenta cuantas veces fue capturado cada pescado
     }
    else {
    setColor (RED);
     cout << endl<< "El peso minimo es de 4 Kg"<<endl;
     setColor (WHITE);
     }
     break;
 case 40:
     if (kg>5){
        vHora [hora-6]++; //Acumula las veces capturadas POR HORA
        vPescador[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve la posicion max (reporteAa)
        vKg[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve los kg max (reporteAb)
        vEspecie[(especie/10)-1]++; // cuenta cuantas veces fue capturado cada pescado
     }
    else {
    setColor (RED);
     cout << endl<<"El peso minimo es de 5 Kg"<<endl;
     setColor (WHITE);
     }
     break;
 case 50:
     if (kg>1){
        vHora [hora-6]++; //Acumula las veces capturadas POR HORA
        vPescador[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve la posicion max (reporteAa)
        vKg[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve los kg max (reporteAb)
        vEspecie[(especie/10)-1]++; // cuenta cuantas veces fue capturado cada pescado
     }
    else {
    setColor (RED);
     cout << endl<<"El peso minimo es de 1 Kg"<<endl;
     setColor (WHITE);
     }
     break;
 case 60:
     if (kg>5){
        vHora [hora-6]++; //Acumula las veces capturadas POR HORA
        vPescador[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve la posicion max (reporteAa)
        vKg[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve los kg max (reporteAb)
        vEspecie[(especie/10)-1]++; // cuenta cuantas veces fue capturado cada pescado
     }
    else {
    setColor (RED);
     cout <<endl<<"El peso minimo es de 5 Kg"<<endl;
     setColor (WHITE);
     }
     break;
 case 70:
     if (kg>1.5){
        vHora [hora-6]++; //Acumula las veces capturadas POR HORA
        vPescador[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve la posicion max (reporteAa)
        vKg[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve los kg max (reporteAb)
        vEspecie[(especie/10)-1]++; // cuenta cuantas veces fue capturado cada pescado
     }
    else {
    setColor (RED);
     cout << endl<< "El peso minimo es de 1.5 Kg"<<endl;
     setColor (WHITE);
     }
     break;
 case 80:
     if (kg>3){
        vHora [hora-6]++; //Acumula las veces capturadas POR HORA
        vPescador[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve la posicion max (reporteAa)
        vKg[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve los kg max (reporteAb)
        vEspecie[(especie/10)-1]++; // cuenta cuantas veces fue capturado cada pescado
     }
    else {
    setColor (RED);
     cout <<endl<<"El peso minimo es de 3 Kg"<<endl;
     setColor (WHITE);
     }
     break;
 case 90:
     if (kg>2.5){
        vHora [hora-6]++; //Acumula las veces capturadas POR HORA
        vPescador[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve la posicion max (reporteAa)
        vKg[pescador-100]+=kg; //Acumula el peso de cada pez, pero devuelve los kg max (reporteAb)
        vEspecie[(especie/10)-1]++; // cuenta cuantas veces fue capturado cada pescado
     }
    else {
    setColor (RED);
     cout << endl<< "El peso minimo es de 2.5 Kg"<<endl;
     setColor (WHITE);
     }
     break;
 default:
     setColor (RED);
     cout <<endl<< "El codigo de especie INCORRECTO. El mismo no sera tenido en cuenta en el registro."<<endl;
     setColor (WHITE);
    break;
 }









    cout <<"................................"<<endl;
    cout << "CODIGO DE PESCADOR: "<<endl<<"> ";
    cin >> pescador;
    }
    else {
        setColor (RED);
        cout << "ERROR AL INGRESAR LA HORA. esos datos no seran contados.";
    }


    }


}

//***********  REPORTEAa  ****************
int buscar_posicion_maximo (int vec[], int tam){
    int i;
    float maximo;
    int posicion;
    maximo= 0;
    posicion=0;
    for (i=0; i<tam; i++){

        if (vec[i] > maximo){
           maximo=vec[i];
            posicion=i;
        }
    }

    return posicion ;

}



void reporteAa (int vec[], int tam){
    cls ();
    int pescador;

    cout << "EL GANADOR ES!: "<<endl;
    pescador = buscar_posicion_maximo (vec, tam);
    cout <<endl<< "Pescador: "<< pescador+100<<endl;

}

//***********  REPORTEAb  ****************

float kg_maximo (float vec[], int tam){

    int i,posicion;
    float max;

    posicion=0;
    max= vec[0];
    for (i=1; i<tam; i++){
        if (vec[i] > max){
           max=vec[i];
           posicion = i;
        }
    }

    return max;

}

void reporteAb (float vec[], int tam){
    float kg_total;
    kg_total= kg_maximo (vec, tam);
    cout << "KG: "<< kg_total;
}


//***********  REPORTE B  ****************


void reporteB (int vec[], int tam){
    cls ();
    cout << "ESTADISTICAS DE LAS ESPECIE/S: "<<endl;
    cout <<"............................."<<endl<<endl;
int i,pescado;

for (i=0; i<tam; i++){
        if (vec[i]> 0){

                pescado = (i+1)*10 ;
    cout << "> El pescado: "<<pescado;
    switch (pescado){
case 10:
    cout<< " 'Anchoa'";
    break;
case 20:
    cout<< " 'Pejerrey' ";
    break;
case 30:
    cout<< " 'Bagre' ";
    break;
case 40:
    cout<< " 'Boga' ";
    break;
case 50:
    cout<< " 'Caballa'";
    break;
case 60:
    cout<< " 'Carpa' ";
    break;
case 70:
    cout<< " 'Trucha patagonica' ";
    break;
case 80:
    cout<< " 'Dorado' ";
    break;
case 90:
    cout<< " 'Lisa' ";
    break;
    }

    cout << " lleva "<< vec[i] << " veces capturadas. " << endl;
}

        }

}

//***********  REPORTE C ****************

int acumulador_capturas (int vec[], int tam ){
    cls ();
    cout << "PORCENTAJE HORARIO: "<<endl;
    cout <<"......................."<<endl<<endl;
    int i, acu;
    acu=vec[0];
    for (i=1; i<tam; i++){
        acu+= vec[i];
    }
  return acu;
}

void reporteC (int vec[], int tam){
    int i,total_capturas;
    total_capturas= acumulador_capturas (vec, tam );
    for (i=0; i<tam; i++){
        cout << " En la hora " << i+6;
        cout << " Hubo: "<< (vec[i] *100)/total_capturas<< " % "<< endl;
    }

}




