#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include "funciones.h"
#define C 2

void agregarPer(Epersona personas[],int largo)
{
    int flagEncontro = 0, i;
    for(i=0; i<C; i++)
    {
        if(personas[i].estado == 0)
        {
            printf("Ingrese nombre: ");
            fflush(stdin);
            gets(personas[i].nombre);
            printf("Ingrese DNI: ");
            scanf("%ld",&personas[i].dni);
            printf("Ingrese edad: ");
            scanf("%d", &personas[i].edad);

            personas[i].estado = 1;
            flagEncontro = 1;

            break;
        }
    }
    if(!flagEncontro)
    {
        printf("No hay espacio suficiente!!!");
    }
}

void borrarPer(Epersona personas[],int largo)
{
        int flagEncontro=0, i;
        long int auxDni;
        char respuesta;
        printf("Ingrese DNI: ");
        scanf("%ld",&auxDni);
        for(i=0; i<C; i++)
        {
            if(personas[i].estado==1)
            {
                if(auxDni == personas[i].dni)
                {
                    printf("%s\t%ld\n", personas[i].nombre,personas[i].dni);

                    printf("Esta seguro de eliminar el dato? s/n: ");
                    respuesta = getche();
                    if(respuesta=='s')
                    {
                        personas[i].estado = 0;
                        printf("\nDatos eliminados.\n");
                    }
                    else
                    {
                        printf("Accion cancelada por el usuario!!!");
                    }

                    flagEncontro=1;
                    break;

                }

            }
        }
        if(flagEncontro==0)
        {
            printf("Dato inexistente");
        }
    }

void mostrar(Epersona personas[], int largo)
{
    Epersona auxper;
    int i,j;
    for(i=0;i<C-1;i++)
    {
        for(j=i+1;j<C;j++)
        {
            if(strcmp(personas[i].nombre,personas[j].nombre)>0)
            {
                auxper=personas[i];
                personas[i]=personas[j];
                personas[j]=auxper;
            }
        }
    }

    for(i=0;i<20;i++)
    {
        if(personas[i].estado==1)
        {
            printf("Nombre: %s\t Edad: %d\t DNI: %ld\n",personas[i].nombre,personas[i].edad,personas[i].dni);
        }
    }
}

void grafico(Epersona personas[], int largo)
{
    int i, hasta18=0, de19a35=0, mayorDe35=0, flag=0, mayor;

    if(hasta18 >= de19a35 && hasta18 >= mayorDe35){
                    mayor = hasta18;
                }else{
                    if(de19a35 >= hasta18 && de19a35 >= mayorDe35)
                    {
                        mayor = de19a35;
                    }
                    else{
                        mayor = mayorDe35;
                        }
                    }

                for(i=mayor; i>0; i--){
                    printf("%02d|",i);

                if(i<= hasta18){
                    printf("*");
                }
                if(i<= de19a35){
                    flag=1;
                    printf("\t*");
                }
                if(i<= mayorDe35){
                    if(flag==0)
                    printf("\t\t*");
                if(flag==1)
                    printf("\t*");

                }
        //Bajo una linea luego de cada iteracion
                    printf("\n");
                }
                printf("--+-----------------");
                printf("\n  |<18\t19-35\t>35");
                printf("\n   %d\t%d\t%d", hasta18, de19a35, mayorDe35);

}


void init(Epersona personas[], int largo) //Inicializa en cero el estado.
{
    int i;
    for(i=0;i<C; i++){
        personas[i].estado = 0;
    }
}
