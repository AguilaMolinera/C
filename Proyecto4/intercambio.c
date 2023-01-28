#include <stdio.h>
#include <assert.h>

/*
{Pre: x = X, y=Y }
x,y := y,x
{Post: x = Y, y = X }

/* 
[Var x,y,z,tempx,tempy : Int]
tempx := x
tempy := y
{tempy = y ∧ tempx = x}
z := x
x := y
y := z


{x = tempy ∧ z = tempx ∧ y = tempx}
*/

int main () {
    int x,y,z,tempy,tempx;
    printf ("ingrese una variable x\n");
    scanf("%d", &x);
    printf ("ingrese una variable y\n");
    scanf("%d", &y);
   
    tempx = x;
    tempy = y;
    assert ((tempy ==y) && (tempx == x)); 
    z = x;
    x = y;
    y = z;

    assert ((x == tempy) && (z == tempx) && (y == tempx));

    printf ("Los nuevos valores son : x = %d ; y = %d \n",x,y);
    return 0;
    }