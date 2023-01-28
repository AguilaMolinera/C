#include <stdio.h>
#include <stdbool.h>
int main () {
    int x , y , z;
    bool a;
    bool b;
printf ("Ingrese un valor para x\n");
scanf ("%d", &x);
printf ("Ingrese un valor para y\n");
scanf ("%d", &y);
printf ("Ingrese un valor para z\n");
scanf ("%d", &z);

printf ("%d+%d+1 = %d\n",x,y, x+y+1 );

printf ("%d*%d+%d*45-15*%d= %d\n",z,z,y,x, z*z+y*45-15*x );

if ((y-2) == ((x*3+1)%5)) {
    a = true;
    }
    else {
    a = false;
    }
printf ("%d-2 == (%d*3+1) %% 5 = %d\n",y,x, a );

printf ("%d/2*%d = %d\n",y,x, (y/2*x)  );

if (y<(x*z)) {
    b = true;
    }
    else {
    a=false;
    }

printf ("%d<%d*%d = %d\n",y,x,z, b );

return 0;


/*
Expresion                    (x→7, y→3, z→5)         (x→1, y→10, z→8)
x + y + 1                  |  11                         12
z * z + y * 45 - 15 * x    |  55                         499
y - 2 == (x * 3 + 1) % 5   |  0 (significa False)        0 (significa False)
y / 2 * x                  |  7                          5
y < x * z                  |  1 (significa True)         0 (significa False)

En la ultima expresion y tambien en la tercera se nos da un resultado int, que varia entre 1 y 0, representando el aspecto binario de los booleanos siendo 1 True y 0 False.

En la expresion 4, testeando por 7 3 5, resulta en 7 por que el resultado de la division
de 3/2 es 1,5 y el programa automaticamente lo redondea a 1.
*/
}