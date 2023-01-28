#include <stdio.h>

void imprimeEntero (int x) {

printf ("El entero es : %d", x);

}

int pedirEntero (void) {

    int x;
    printf ("Ingrese Entero \n");
    scanf ("%d", &x);
return x;

}

int main () {

imprimeEntero(pedirEntero());

}

