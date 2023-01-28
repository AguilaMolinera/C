#include <stdio.h>

int main () {
int x,y;
printf ("Ingrese variable x \n");
scanf ("%d", &x);
x=5;
printf ("Programa a) es x=%d \n", x);

printf ("------------------------ \n");

printf ("Ingrese variable x\n");
scanf ("%d", &x);
printf ("Ingrese variable y\n");
scanf ("%d", &y);
x=x+y;
printf ("Programa b) x=%d \n", x);
y=y+y;
printf ("            y=%d \n", y);

printf ("------------------------ \n");

printf ("Ingrese variable x\n");
scanf ("%d", &x);
printf ("Ingrese variable y\n");
scanf ("%d", &y);
y=y+y;
printf ("Programa c) y=%d \n", y);
x=x+y;
printf ("            x=%d \n", x);
return 0;


/*
programa usuario    ingresa un σ0             produce una salida σ
1.a ejecucion 1     σ0:(x->1)                   σ1:(x->5)
1.a ejecucion 2     σ0:(x->4)                   σ1:(x->5)
1.a ejecucion 3     σ0:(x->25)                  σ1:(x->5)
1.b ejecucion 1     σ0:(x->2,y->3)              σ1:(x->5,y->3)    σ2:(x->5,y->7)   
1.b ejecucion 2     σ0:(x->2,y->5)              σ1:(x->7,y->3)    σ2:(x->7,y->10)
1.b ejecucion 3     σ0:(x->25,y->30)            σ1:(x->55,y->3)   σ2:(x->55,y->60)
1.c ejecucion 1     σ0:(x->4,y->5)              σ1:(x->5,y->10)   σ1:(x->14,y->10)         
1.c ejecucion 2     σ0:(x->2,y->5)              σ1:(x->5,y->10)   σ1:(x->12,y->10)
1.c ejecucion 3     σ0:(x->150,y->200)          σσ1:(x->5,y->400) σ1:(x->550,y->400)

*/
}


