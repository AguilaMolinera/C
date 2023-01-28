#include <stdio.h>
#include <assert.h>

struct comp_t {
int menores;
int iguales;
int mayores;
};
struct comp_t cuantos(int a[], int tam, int elem){
    struct comp_t val;
    int i=0;
    val.iguales=0;
    val.mayores=0;
    val.menores=0;

    while  (i<tam) {
        if (a[i] > elem) {
            val.mayores = val.mayores + 1; 
        }
        else if (a[i] == elem) {
            val.iguales = val.iguales + 1; 
        }
        else if (a[i] < elem) {
            val.menores = val.menores + 1; 
        }
        i=i+1;
    }
    return val;
}

int main () {
    int tam,elem,i=0;
    printf ("Ingrese tamanho para el arreglo \n");
    scanf ("%d",&tam);
    int a[tam];
    assert (tam > 0);
    while (i<tam) {
        printf ("Ingrese valor para la posicion %d del arreglo \n",i);
         scanf ("%d",&a[i]);
         i=i+1;
    } 
    printf ("Ingrese valor a comparar \n");
    scanf ("%d",&elem);
    struct comp_t res = cuantos (a,tam,elem);
    printf ("Elementos mayores = %d , elementos menores = %d , elementos iguales = %d \n",res.mayores,res.menores,res.iguales);
    return 0;
}