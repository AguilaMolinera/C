#include <stdio.h>
#include <stdbool.h>

bool pedirBooleano (void) {

printf ("Ingrese true (1) o false (0) \n");
bool x;
int tempx;
scanf ("%d",&tempx);
x=tempx;
return x;

}

void imprimeEntero (int x) {

if (x==true) {
 printf ("verdadero \n");
}
else if (x==false) {
 printf ("falso");   
}

}

int main () {

imprimeEntero(pedirBooleano());

}