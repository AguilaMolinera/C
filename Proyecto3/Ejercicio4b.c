#include <stdio.h>

int main () {
    int x,y,z,m;
printf ("ingrese variable x \n");
scanf ("%d",&x);
printf ("ingrese variable y \n");
scanf ("%d",&y);
printf ("ingrese variable z \n");
scanf ("%d",&z);
printf ("ingrese variable m \n");
scanf ("%d",&m);

if (x<m) {
    m=x;
}
else if (x>=y) {
    m=y;
}

printf ("x=%d , y=%d , z=%d , m=%d \n",x,y,z,m);
if (m<z)
{
}
else if (m>=z) {
    m=z;
}

printf ("x=%d , y=%d , z=%d , m=%d \n",x,y,z,m);

// Este programa averigua cual es el minimo entero entre x, y , z, si bien se puede intresar un valor m esto no importa ya que luego del primer if se cambiara a x o y. En el ultimo printf se
// nos da como resultado, en forma de variable m, el minimo int. El valor final de la variable m es 4

/*
σ0:(x->5,y->4,z->8,m->0)
σ1:(x->5,y->4,z->8,m->4)
σ2:(x->5,y->4,z->8,m->4)
*/
    return 0;
}