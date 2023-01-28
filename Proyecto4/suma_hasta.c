#include <stdio.h>
#include <assert.h>

int suma_hasta(int N) {
  int i,r;
    r=0;
    i=1;
//En esta contamos 0 como el primero siempre
while (i <= N) {
    
    r=r+i;
    i=i+1;
}
return r;
}

int main () {
 int n;
 printf("ingrese variable \n");
 scanf ("%d",&n);
 if (n<0) {
    printf("error, se ingreso un numero no Natural");
 }
 else if (n>=0) {
    printf ("la suma de los primeros %d numeros Naturales es %d \n",n,suma_hasta(n));
 }
 return 0;
}