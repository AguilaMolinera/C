#include <stdio.h>

int main () {
int x,y;
printf ("Ingrese variable x \n");
scanf ("%d",&x);
printf ("Ingrese variable y \n");
scanf ("%d",&y);
if (x>=y) {
    x=0;
}
else if (x<=y) {
    x=2;
}
printf ("x=%x e y=%d \n",x,y);



return 0;

/*
programa e)
σ0:(x->3,y->1)
σ1:evaluar (x>=y,x=0)=True
σ1':(x->0,y->1)
σ3:(x->0,y->1)

programa f)
σ0:(x->-100,y->1)
σ1:evaluar (x>=y,x=0)=False
σ1':(x->-100,y->1)
σ2:evaluar (x<=y,x=2)=True
σ2':(x->2,y->1)
σ3':(x->2,y->1)
*/
}