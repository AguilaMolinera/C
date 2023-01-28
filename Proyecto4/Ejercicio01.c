#include <stdio.h>
#include <assert.h>
void holaHasta(int n) {
while (n>0) {
   printf ("hola \n");
   n=n-1;
    }
}
int pedidoV (void){
    int n;
    printf ("Ingrese cantidad de veces\n");
    scanf ("%d",&n);
    assert (n>0);
   return n;
}
int main () {
   holaHasta(pedidoV());
return 0;
}