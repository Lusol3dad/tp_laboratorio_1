#include<stdio.h>
#include<stdlib.h>
#include "funciones.h"
#include<windows.h>
main()
{
    char seguir='s';
    int opcion=0;
    int band1=1;
    int band2=1;
    float num1,num2;
    float resultado;

    while(seguir=='s')
    {
        printf("\nElige una opcion: \n");
        printf("\n1- Ingresar primer numero: \n");
        printf("2- Ingresar segundo numero: \n");
        printf("3- Calcular la suma: \n");
        printf("4- Calcular la resta: \n");
        printf("5- Calcular la division: \n");
        printf("6- Calcular la multiplicacion: \n");
        printf("7- Calcular el factorial: \n");
        printf("8- Calcular todas las operaciones: \n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1: //Ingreso de primer número para luego operarlo.
                    system("cls");
                    printf("Ingrese el primer numero: \n");
                    scanf("%f",&num1);
                    printf("\nEl numero ingresado es: %f\n",num1);
                    band1=0;
                    break;

            case 2: //Ingreso del segundo número para luego operarlo.
                    system("cls");
                    printf("Ingrese el segundo numero: \n");
                    scanf("%f",&num2);
                    printf("\nEl numero ingresado es: %.2f\n",num2);
                    band2=0;
                    break;

            case 3: //Suma de los números ingresados.
                    system("cls");
                    resultado=suma(num1,num2);
                    printf("La suma de los numeros es: %.2f\n",resultado);
                    break;

            case 4: //Resta de los números ingresados.
                    system("cls");
                    resultado=resta(num1,num2);
                    printf("La resta de los numeros es: %.2f\n",resultado);
                    break;

            case 5: //División de los números ingresados.
                    system("cls");
                    if(num1!=0&&num2!=0)
                    {
                        resultado=division(num1,num2);
                        printf("El resultado de la division es: %.2f\n",resultado);
                    }
                    else
                    {
                        printf("Ingrese un numero distinto a cero.\n");
                    }

                    break;

            case 6: //Multiplicación de los números ingresados.
                    system("cls");
                    if(num1==0||num2==0)
                        {
                            printf("El resultado es 0.");
                        }
                    else
                        {
                            resultado=multiplicacion(num1,num2);
                            printf("El resultado de la multiplicacion es: %.2f\n",resultado);
                        }
                    break;

            case 7: //Factorial de un número ingresado.
                    system("cls");
                    resultado=factorial(num1);
                    printf("El factorial es: %.2f\n",resultado);
                    break;

            case 8: //Se calculan todas las operaciones con los números ingresados.
                    system("cls");
                    resultado=suma(num1,num2);
                    printf("La suma de los numeros es: %.2f\n",resultado);
                    resultado=resta(num1,num2);
                    printf("\nLa resta de los numeros es: %.2f\n",resultado);
                    resultado=division(num1,num2);
                    printf("\nLa division de los numeros es: %.2f\n",resultado);
                    resultado=multiplicacion(num1,num2);
                    printf("\nLa multiplicacion de los numeros es: %.2f\n",resultado);
                    resultado=factorial(num1);
                    printf("\nEl factorial es: %.2f\n",resultado);
                    break;

            case 9: //Abandonar el programa.
                    printf("Salir \n");
                    seguir = 'n';
                    break;

        }

    }
}
