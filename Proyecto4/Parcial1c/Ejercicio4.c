#include <stdio.h>
#include <assert.h>
#include <limits.h>
#define N 5

struct persona_t {
    int dni;
    float altura;
};

struct paridad_t {
    float altura_media;
    float altura_minima;
    float altura_maxima;
};

struct paridad_t calcular_estadistica (struct persona_t a[],int tam) {
    int i=1;
    struct paridad_t paridad1;
    paridad1.altura_maxima=INT_MIN;
    paridad1.altura_minima=INT_MAX;
    paridad1.altura_media=0;
    
    while (i<tam) {
        if (a[i].altura<=paridad1.altura_minima) {
            paridad1.altura_minima = a[i].altura;
        }
        else if (a[i].altura>paridad1.altura_minima) {
            //skip
        }
        if (a[i].altura>=paridad1.altura_maxima) {
            paridad1.altura_maxima = a[i].altura;
        }
        else if (a[i].altura<paridad1.altura_maxima) {
            //skip
        }
        paridad1.altura_media=paridad1.altura_media+a[i].altura;
        i=i+1;
    }
    paridad1.altura_media=paridad1.altura_media/tam;
    return paridad1;
    
}

int main(void) {
 int i=0;
 struct persona_t personas[N];
 
  while (i<N) {
    printf ("Ingrese dni \n");
    scanf ("%d",&personas[i].dni);
    printf ("Ingrese altura \n");
    scanf ("%f",&personas[i].altura);
    i=i+1;
  }
  struct paridad_t paridad1;
  paridad1 = calcular_estadistica (personas,N);
  printf ("La altura maxima es = %f, la altura minima es = %f, la altura promedio es = %f \n", paridad1.altura_maxima,paridad1.altura_minima,paridad1.altura_media);
}

