#include <stdio.h>
#include <assert.h>
/*
{Pre: x = X, y = Y, z = Z}
x, y, z := y, y + x + z, y + x
{Post: x = Y, y = Y + X + Z, z = Y + X}


multiple2 :

[Var x,y,z,tempz,tempx,tempy : Int]
tempx := x
tempy := y
tempz := z
{tempx = x ∧ tempy = y ∧ tempz = z}
x := y
y := y + tempx + z
z := tempy + tempx

{x = tempy ∧ y = tempy + tempx + tempz ∧ z= tempy + tempx}
*/

int main () {
    int x,y,z,tempz,tempy,tempx;
    printf ("ingrese una variable x\n");
    scanf("%d", &x);
    printf ("ingrese una variable y\n");
    scanf("%d", &y);
    printf ("ingrese una variable z\n");
    scanf("%d", &z);
   tempx = x;
   tempy = y;
   tempz = z;
   assert ((tempx == x) && (tempy == y) && (tempz == z));
   x = y;
   y = y + tempx + z;
   z = tempy + tempx;
   assert ( (x==tempy) && (y==tempy + tempx + tempz) && (z==tempy + tempx));


    printf ("Los nuevos valores son : x = %d ; y = %d ; z = %d\n",x,y,z);
    return 0;
    }