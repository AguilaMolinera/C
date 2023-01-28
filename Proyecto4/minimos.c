#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
#define Tam 5

bool esPar (int x) {
    if ((x % 2) == 0) {
        return true;
    }
    else {
        return false;
    }
}

int minimo_pares(int a[], int tam) {
    int i=0,min=INT_MAX;
    while (i<tam) {
        //printf ("espar a[i] ? = %d \n",esPar (a[i]));
        if ((esPar (a[i])) == true) {
            if (a[i]<=min) {
                min = a[i];
            }
            else if (min<a[i]) {
               //skip

            }
        }
        else if ((esPar (a[i])) == false) {
            //skip
        }
        //printf ("min actual = %d \n",min);
        i=i+1;
    }

return min;

}
int minimo_impares(int a[], int tam) {
int i=0,min=INT_MAX;
    while (i<tam) {
        if ((esPar (a[i])) == false) { 
            if (a[i]<=min) {
                min = a[i];
            }
            else if (min<a[i]) {
               //skip

            }
        }
        else if ((esPar (a[i])) == true) {
            //skip
        }
        i=i+1;
    }
return min;
}

int main () {
    int i=0,minpar,minimpar;
    assert (Tam>=0);
    int a[Tam];
    while (i<Tam) {
        printf ("Ingrese valor para la posicion %d \n",i);
        scanf ("%d",&a[i]);
        i=i+1;
    }
    minimpar = minimo_impares (a,Tam);
    minpar = minimo_pares (a,Tam);
    if (minpar <= minimpar) {
    printf ("El minimo elemento del arreglo es : %d \n",minpar);
    }
    else if (minimpar < minpar) { 
        printf ("El minimo elemento del arreglo es : %d \n",minimpar);
    }
    
    return 0;

}