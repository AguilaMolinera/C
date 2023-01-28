#include <stdio.h>
#include <assert.h>
/*
{Pre: x=X,y=Y}
if x>=y then
r := Y
else 
r := X
{Post: x>=Y and r = Y or x<y and r = x}

/*
[Var x,y,r,tempy,tempx : Int]
tempx := x
tempy := y
{tempy = y ∧ tempx = x}
if (x>=y) -> r:=y
[] -> r:=x
{r = y ∧ x>=y ∨ r = x ∧ y>x}
*/

int main () {
    int x,r,y,tempy,tempx;
    printf ("ingrese una variable x\n");
    scanf("%d", &x);
    printf ("ingrese una variable y\n");
    scanf("%d", &y);
tempx = x;
tempy = y;
assert ((tempx == x) && (tempy == y));
    if (x>=y) {
        r = y;
    }
    else { 
        r = x;
    }    

    assert ((r == y && tempx >= tempy) || (r == x && tempy > tempx));

    printf ("El minimo es : %d \n",r);
    return 0;
    }