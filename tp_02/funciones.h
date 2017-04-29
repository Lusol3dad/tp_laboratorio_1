#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



typedef struct
{

    char nombre[20];
    int edad;
    int estado;
    long int dni;

}Epersona;

void agregarPer(Epersona personas[],int largo);
void borrarPer(Epersona personas[],int largo);
void listar(Epersona personas[],int largo);
void grafico(Epersona personas[],int largo);

#endif // FUNCIONES_H_INCLUDED
