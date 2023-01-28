#include <stdio.h>

int pedirEntero (void) {
    int x;
printf ("ingrese variable i\n");
scanf ("%d",&x);

return x;
}

void imprimeEntero (int x) {

while (x!=0) {
    printf ("i=%d \n",x);
    x=x-1;
}
printf ("i=%d", x);

}

int main () {
    int x;
x = pedirEntero();

imprimeEntero(x);
return 0;
}
