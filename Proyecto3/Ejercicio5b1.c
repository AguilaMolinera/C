#include <stdio.h>

int main () {
int x,y,i;
printf ("Ingrese variable x\n");
scanf ("%d",&x);
printf ("Ingrese variable y\n");
scanf ("%d",&y);
printf ("Ingrese variable i\n");
scanf ("%d",&i);

i=0;
while (x>=y) {
    x=x-y;
    i=i+1;
    printf ("x->%d,y->%d,i->%d \n",x,y,i);
}
return 0;

/*
σ0:(x->13,y->3,i->0)
σ(0/1):(x->10,y->3,i->1)
σ(1/1):(x->7,y->3,i->2)
σ(2/1):(x->4,y->3,i->3)
σ(3/1):(x->1,y->3,i->4)
*/
}