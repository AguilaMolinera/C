#include <stdio.h>

int pedirEntero (void) {
    int x;
printf ("ingrese variable\n");
scanf ("%d",&x);

return x;
}

void imprimeEntero (int x, int y, int z, int m) {
if (x<y) {
    m=x;
}
else if (x>=y) {
    m=y;
}

printf ("x=%d , y=%d , z=%d , m=%d \n",x,y,z,m);
if (m<z)
{
}
else if (m>=z) {
    m=z;
}
printf ("x=%d , y=%d , z=%d , m=%d \n",x,y,z,m);
}

int main () {
    int x,y,z,m;
x = pedirEntero();
y = pedirEntero();
z = pedirEntero();
m = pedirEntero();
imprimeEntero(x,y,z,m);
return 0;
}

/*
Esta nueva version tiene la ventaja de estar mas organizada. Podria escribir funciones particulares para cada pedida de enteros y sustituir con cada funcion en el main.
Creo que prodria utilizarla en el ejercicio 5)a) (Voy a realizar un archivo aparte para que este mas ordenado).
En teoria se podria utilizar en casi todos los programas.
*/