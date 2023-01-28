#include <stdio.h>
#include <stdbool.h>
int main () {
int x,i,tempres;
bool res;
printf ("Ingrese variable x\n");
scanf ("%d",&x);
printf ("Ingrese variable i\n");
scanf ("%d",&i);
printf ("Ingrese variable res\n");
scanf ("%d",&tempres);
res = tempres;
res=true;
i=2;

while (i<x&&res) {
    res=res&&((x % i) !=0);
    i=i+1;
    printf ("x->%d,i->%d,res->%d \n",x,i,res);
}

return 0;

/*
σ0:(x->5,i->0,res->false)
σ(0/1):(x->5,i->3,res->1)
σ(1/1):(x->5,i->4,res->1)
σ(2/1):(x->5,i->5,res->1)

*/


// Ejercicio 5)b)3) El b)1) nos devuelve i-veces restas de x con y hasta que x>=y
//                     b)2) nos devuelve el primer divisor de x
}