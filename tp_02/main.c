#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funciones.h"

int main()
{
    Epersona personas[20],auxper;
    char auxnom[20];
    char seguir='s';
    int opcion=0;
    int acumNom=0;
    int acumEdad=0;
    int flag1=0,flag2=0;


    while(seguir=='s')
    {
        printf("\n1- Agregar persona\n");
        printf("2- Borrar persona\n");
        printf("3- Imprimir lista ordenada por  nombre\n");
        printf("4- Imprimir grafico de edades\n");
        printf("5- Salir\n\n");

        scanf("%d",&opcion);



        switch(opcion)
        {
        case 1:
                init(personas);
                agregarPer(personas,20);
                break;
        case 2:
                borrarPer(personas,20);
                break;
        case 3:
                mostrar(personas,20);
                break;
        case 4:
                grafico(personas,20);
                break;
        case 5:
                seguir = 'n';
                break;
        }
    }
}
