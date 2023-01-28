#include <stdio.h>
#include <assert.h>
#define N 5

int suma_divisibles (int a[], int tam, int d);

int main () {
    int i=1,d;
    int a[N];

    while (i <= N) {
        printf ("Ingrese clave para posicion %d \n",i);
        scanf ("%d",&a[i]);
        i=i+1;
    }
    printf ("Ingrese entero \n");
    scanf ("%d",&d);

    printf ("La suma de los elementos del arreglo divisibles por %d es %d \n",d,suma_divisibles (a,N,d));
}

int suma_divisibles (int a[], int tam, int d) {
    int i=0,sum=0;
    while (i<tam) {
        if (a[i]%d==0) {
            sum=sum+a[i];
        }
        else {
            //skip
        }
        i=i+1;
    }
    return sum;
}