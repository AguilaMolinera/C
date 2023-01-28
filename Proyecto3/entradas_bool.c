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

void imprimeEntero (bool x) {
if (x==1) {
 printf ("verdadero \n");
}
else if (x==0) {
 printf ("falso \n");   
}

}

int main () {

imprimeEntero(pedirBooleano());

}