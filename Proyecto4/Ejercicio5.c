#include <stdio.h>
#include <assert.h>

void pedirArreglo (int a[], int n_max) {
    int i=0,r;
while (i<n_max) {
    printf ("Ingrese valor para posicion %d \n",i);
    scanf ("%d",&r);
    a[i] = r;
    i=i+1;
}
}

void imprimeArreglo(int a[], int n_max) {
 printf ("valores : \n");
 int i=0;
 while (i<n_max)
 {
 printf ("a[%d] = %d \n",i,a[i]);
 i=i+1;
 }
 

}

int main (){
   int n;
 printf ("Ingrese tamanho del arreglo\n");
 scanf ("%d",&n);
 assert (n>0);
 int a[n];
   pedirArreglo (a,n);
   imprimeArreglo (a,n);

}