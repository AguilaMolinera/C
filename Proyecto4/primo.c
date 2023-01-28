#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool esPrimo (int num) {
    int i=2,es=0;
    if ((num == 0) || (num == 1)) {
            es=1;
    }
    while (i <= num/2) {
        if (num%i==0) {
            es=1;
        }
        i=i+1;
    }
    if (es == 0) {
        //printf ("%d es primo \n",num);
        return true;
    }
    else {
        //printf ("%d no es primo\n",num);
        return false;
    }
}

int nesimo_primo(int N) {
   int i=0,nprimo,sump=0;
    while (sump<N) {
        if (esPrimo(i) == true) {
            nprimo=i;
            sump=sump+1;
        }
        else {
            //skip
        }
        i=i+1;
    }
return nprimo;
}

int main () {
    int n;
    printf ("Ingrese numero \n");
    scanf ("%d",&n);
    if (n<=0) {
        printf ("No ingresar valores negativos o nulos \n");
        main();
    }
    else {
        printf ("el %d-simo primo es %d \n",n, nesimo_primo(n));
        }
}