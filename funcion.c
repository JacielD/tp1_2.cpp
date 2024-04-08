#include <stdio.h>

int calcularCuadrado(int num1);
void calcularCuadrado2(int num1);
void Invertir(int a,int b); 
void Ordenar(int a,int b);
int main(){
    int num,resul,*punt,numA,numB;

    printf("ingrese un numero: ");
    scanf("%d",&num);

    punt = &num;

    printf("la direccion de memoria de la variable es: %p y contiene el valor: %d \n",punt,num);

    resul = calcularCuadrado(num);

    printf("el cuadrado du el numero %d es: %d\n",num,resul);

    calcularCuadrado2(num);

    printf("ingrese un valor A:");
    scanf("%d",&numA);

    printf("ingrese un valor B:");
    scanf("%d",&numB);

    printf("el valor A es: %d\n el valor B es: %d\n",numA,numB);

    Invertir(numA,numB);
    Ordenar(numA,numB);

    return 0;
}

int calcularCuadrado(int num1){

    return(num1 * num1);
}
void calcularCuadrado2(int num1){

    int res = num1 * num1;

    printf("el cuadrado de %d es == %d \n",num1,res);
}
void Invertir(int a,int b){

    int aux = a;
    a = b;
    b = aux;

    printf("el valor A es: %d\n el valor B es: %d\n",a,b);

}
void Ordenar(int a,int b){

    int aux;
    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    printf("ordenando los numeros queda como %d -- %d",a,b);
}