#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#define Tam 5

typedef char clave_t; // clave_t es ahora un valor char
typedef int valor_t; // valor_t es ahora un valor int

struct asoc {
clave_t clave; //clave es tipo char
valor_t valor; //valor es tipo int

};

bool asoc_existe(struct asoc a[], int tam, clave_t c) {
    int i=0;
    while (i<tam) {
        if (a[i].clave == c) {
            return true;
        }
        i=i+1;
    }
    return false;
    }

int main () {
    int i=0;
    bool res;
    assert (Tam>=0);
    struct asoc a[Tam];
    struct asoc asoc1;
    assert (Tam>0);
    while (i<Tam) {
        printf ("Ingrese clave para posicion %d \n",i);
        scanf (" %c",&a[i].clave);
        printf ("Ingrese valor para posicion %d \n",i);
        scanf ("%d",&a[i].valor);
        i=i+1;
    }
    printf ("Ingrese una clave \n");
    scanf (" %c",&asoc1.clave);
    res = asoc_existe (a,Tam,asoc1.clave);
    if (res == true) {
        printf ("La clave existe en el arreglo de asociaciones \n");
    }
    else {
        printf ("La clave no existe en el arreglo de asociaciones \n");
    }
    return 0;

}