#include <stdio.h>
#include <assert.h>

void intercambiar(int a[], int tam, int i, int j) {
    int tempi,tempj;
    int l=0;
    tempi = a[i];
    tempj = a[j];
    assert ((tempi == a[i]) && (tempj == a[j] ));
    a[i] = tempj;
    a[j] = tempi;
assert ((a[i] = tempj)&&(a[j]==tempi));

while (l<tam) {
    printf ("Valor en posicion %d : %d\n",l,a[l]);
    l=l+1;
}
}

int main () {
    int tam,pos1,pos2,i=0;
    printf ("Ingrese tamanho del arreglo\n");
    scanf ("%d",&tam);
    assert (tam>0);
    int a[tam];
    while (i<tam)
    {
        printf ("Ingrese valor para posicion %d\n",i);
        scanf ("%d",&a[i]);
        i=i+1;
    }
    printf ("Ingrese primera posicion a intercambiar \n");
    scanf ("%d",&pos1);
    printf ("Ingrese segunda posicion a intercambiar \n");
    scanf ("%d",&pos2);
    assert ((pos1 >= 0) && (pos2 >= 0) && (pos1 <= tam) && (pos2 <= tam));
    intercambiar (a,tam,pos1,pos2);
    return 0;
}