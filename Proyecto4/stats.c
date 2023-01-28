#include <stdio.h>
#include <assert.h>
#include <limits.h>


struct datos_t {
float maximo;
float minimo;
float promedio;
};

struct datos_t stats(float a[], int tam) {
    int i=0;
    struct datos_t dat;
    dat.maximo=INT_MIN;
    dat.minimo=INT_MAX;
    dat.promedio=0;
    while (i<tam) {
        //MINIMO
        if (a[i]<=dat.minimo) {
            dat.minimo=a[i];

        }
        else if (a[i]>dat.minimo) {
            //skip
        }
        //MAXIMO
        if (a[i]>=dat.maximo) {
            dat.maximo=a[i];

        }
        else if (a[i]<dat.maximo) {
            //skip
        }
        //PROMEDIO
        dat.promedio=dat.promedio+a[i];
        i=i+1;
    }
    dat.promedio=(dat.promedio/tam);
    
    return dat;
}



int main () {
    int i=0,tam;
    printf ("Ingrese tamanho del arreglo \n");
    scanf ("%d",&tam);
    float a[tam];
    assert (tam>0);
    while (i<tam) {
        printf ("Ingrese valor para posicion %d \n",i);
        scanf ("%f",&a[i]);
        i=i+1;
    }
    struct datos_t res = stats (a,tam);
    printf ("El maximo elemento es = %f , el minimo elemento es = %f y el promedio de todos los elementos es = %f \n",res.maximo,res.minimo,res.promedio);

}
