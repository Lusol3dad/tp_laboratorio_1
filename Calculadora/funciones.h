#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#endif // FUNCIONES_H

float division(float numero1,float numero2);
float division(float numero1,float numero2)
{
    if(numero1!=0 && numero2!=0)
    {
        float div;
        div=numero1/numero2;
        return div;
    }
    else
    {
        printf("Ingrese un numero distinto a cero.");
    }


}
double factorial(double x);
double factorial(double x)
{
    double res;
    if(x==1)
        return 1;
    res=x*factorial(x-1);
    return res;
}

float multiplicacion(float num1,float num2);
float multiplicacion(float num1,float num2)
{
    float multiplicacion;
    multiplicacion=num1*num2;
    return multiplicacion;
}

float resta(float num1,float num2);
float resta(float num1,float num2)
{
    float resta;
    resta=num1-num2;
    return resta;
}

float suma(float num1,float num2);
float suma(float num1,float num2)
{
    float suma;
    suma=num1+num2;
    return suma;
}
