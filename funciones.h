#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
    //DECLARACIONES DE FUNCIONES

void poner_cero(int[], int);
void poner_cero(float[], int);




void registrar_exportaciones (int [], int [], int [], float []);//registro
int buscar_posicion_maximo(int [], int);
//float kg_total(float [], int);
float kg_maximo (float [], int);
int acumulador_capturas (int vec[], int);// para saber el porcentaje de cada hora

int cantidad_capturas (int [], int);



//Reporte A(( muestra el ganador y los Kgs ))
void reporteAa (int [], int );
void reporteAb (float [], int );
void reporteB(int [], int);
void reporteC (int [], int);


#endif // FUNCIONES_H_INCLUDED
