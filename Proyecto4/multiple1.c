#include <stdio.h>
#include <assert.h>
/*
{Pre: x = X, y = Y}
x, y := x + 1, x + y
{Post: x = X + 1, y = X + Y}


multiple1 :

[Var x,y,tempx,tempy : Int]
tempx := x
tempy := y
{tempx = x ∧ tempy = y}
x := x+1
y := tempx+y

{x = tempx + 1 ∧ y = tempy + tempx}
*/

int main () {
    int x,y,tempy,tempx;
    printf ("ingrese una variable x\n");
    scanf("%d", &x);
    printf ("ingrese una variable y\n");
    scanf("%d", &y);
   tempx = x;
   tempy = y;
   assert ((tempx == x) && (tempy == y));
   x = x+1;
   y = tempx + y;
   assert ( (x==tempx+1) && (y==tempx+tempy));


    printf ("Los nuevos valores son : x = %d ; y = %d \n",x,y);
    return 0;
    }