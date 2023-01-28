#include <stdio.h>
#include <assert.h>
#define N 5
#include <stdbool.h>
#include <limits.h>

bool esPar (int x) {
    if ((x % 2) == 0) {
        return true;
    }
    else {
        return false;
    }
}

struct s_paridad_t stats_paridad (int a[],int tam);

struct s_paridad_t {
    int max_par;
    int min_par;
    int sum_par;
};

int main () {
    int i=1;
    int a[N];

    while (i <= N) {
        printf ("Ingrese clave2 para posicion %d \n",i);
        scanf ("%d",&a[i]);
        i=i+1;
    }
    struct  s_paridad_t paridad1;
    paridad1 = stats_paridad (a,N);
    printf ("El maximo elemento par es %d, el minimo elemento par es %d, y la suma de todos los elementos pares es %d \n",paridad1.max_par,paridad1.min_par,paridad1.sum_par);
    
    
}

struct s_paridad_t stats_paridad (int a[],int tam) {
    int i=0;
    struct s_paridad_t paridad;
    paridad.max_par=INT_MIN;
    paridad.min_par=INT_MAX;
    paridad.sum_par=0;
    
    while (i<tam) {
        //printf ("espar a[i] ? = %d \n",esPar (a[i]));
        if ((esPar (a[i])) == true) {
            if (a[i]<=paridad.min_par) {
                paridad.min_par = a[i];
            }
            else if (paridad.min_par<a[i]) {
               //skip
            }
            if (a[i]>=paridad.max_par) {
                paridad.max_par=a[i];
            }
            else if (paridad.max_par>a[i]) {
                //Skip
            }
            paridad.sum_par=paridad.sum_par+a[i];
        }
        else if ((esPar (a[i])) == false) {
            //skip
        }
        //printf ("min actual = %d \n",min);
        i=i+1;
    }
    return paridad;
}