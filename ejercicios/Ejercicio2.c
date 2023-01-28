#include <stdio.h>
#include <stdbool.h>
int main () {
    int x,y,z,tempb,tempw;
    bool b , w;

    printf ("Ingresar variables tal que: \n");
    printf ("x %% 4 == 0 True \n");
    printf ("x + y == 0 && y - x == (-1) * z True \n");
    printf ("not b && w False \n");

    printf ("ingrese la variable x\n");
    scanf("%d", &x);
    printf ("ingrese la variable y\n");
    scanf("%d", &y);
    printf ("ingrese la variable z\n");
    scanf("%d", &z);
    printf ("ingrese la variable b\n");
    scanf("%d", &tempb);
    printf ("ingrese la variable w\n");
    scanf("%d", &tempw);
    b=tempb;
    w=tempw;
    printf ("%d %% 4 == 0 es %d\n", x, x % 4 == 0 );
    printf ("%d + %d == 0 es %d && %d - %d == (-1) * %d es %d \n", x,y,x+y==0,y,x,z, y - x == (-1) * z);
    printf ("not %d && %d es %d \n",b,w, !b && w);

    printf ("Valores encontrados: (x -> 8 , y -> -8 , z -> 16 , b -> 1 , w -> 0 )");



return 0;
}

