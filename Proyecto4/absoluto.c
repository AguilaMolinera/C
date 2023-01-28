#include <stdio.h>
#include <assert.h>

/*
{Pre: x=X}
if x<0 then
r := x*(-1)
else
r := x
{Post: X<0 and r = X*(-1) or X>=0 and r = X  }


/* 
[Var x,tempx : Int]
tempx := x
{tempx = x}
if (x<0) -> x=x*(-1)
[] -> x
{x >= 0 ∧ r = x ∨ x < 0 ∧ r = x*(-1)}
*/

int main () {
    int x,r,tempx;
    printf ("ingrese una variable\n");
    scanf("%d", &x);
    tempx = x;
assert (tempx = x);
    if (x<0) {
        r = x*(-1);
    }
    else { 
        r = x;
    }    

    assert ((x >= 0 && r == x) || (x < 0 && r == x*(-1)));

    printf ("El valor absoluto es : |%d| \n",r);
    return 0;
    }