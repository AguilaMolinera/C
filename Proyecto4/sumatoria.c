#include <stdio.h>
#include <assert.h>
#define Tam 5

int sumatoria (int a[], int tam) {
    int i=0,sum=0;
    while (i<tam) {
    sum = sum + a[i];
    i=i+1;
}
return sum;
}

int main () {
    int i=0,pos;
assert (Tam>=0);
int a[Tam];
while (i<Tam) {
    printf ("Ingrese valor para posicion %d \n",i);
    scanf ("%d",&pos);
    a[i] = pos;
    i=i+1;
}
printf ("la suma de todos los elementos del array es : %d \n",sumatoria (a,Tam));
return 0;
}