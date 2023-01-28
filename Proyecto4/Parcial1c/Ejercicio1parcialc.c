#include <stdio.h>
#include <assert.h>

int main () {
    int i,j,k,tempi,tempj,tempk;
    printf ("Ingrese variable i \n");
    scanf ("%d",&i);
    printf ("Ingrese variable j \n");
    scanf ("%d",&j);
    printf ("Ingrese variable k \n");
    scanf ("%d",&k);
    tempi = i;
    tempj = j;
    tempk = k;

    assert ((i==tempi) && (j==tempj) && (k=tempk) && (k>0) && (i>j));

    i = j + i;
    j = j + k;
    k = k + tempi;

    assert ((i==tempj+tempi) && (j == tempj+tempk) && (k==tempk+tempi)); 

    printf ("Valor final de :  i = %d , j = %d , k= %d \n",i,j,k);

}