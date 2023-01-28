#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#define Tam 5

//Existe positivo?
bool existe_positivo(int a[], int tam) {
    int i=0;
while (i<tam) {
    if (a[i]==1) {
        return true;

    }
    else if (a[i]==0){
        //skip
    }
    i=i+1;

}
return false;
}
// Son todos positivos?
bool todos_positivos(int a[], int tam) {
    int i=0;
while (i<tam) {
    if (a[i]==0) {
        return false;
    }
    else if (a[i]==1){
        //skip
    }
    i=i+1;

}
return true;
}

int main () {
int i=0,pos,elecc;
//tamaño?
assert (Tam>=0);
int a[Tam];
//ingreso valores
while (i<Tam) {
    printf ("Ingrese valor para posicion  %d // ( true (1) o false(0) ) \n",i);
    scanf ("%d",&pos);
    assert ((pos == 1)||(pos == 0));
    a[i] = pos;
    i=i+1;
}
// Que funcion quiero?
printf ("Elegir que hacer : \n");
printf ("(1) Todos los elementos son positivos o (0) Existe un elemento positivo \n");
scanf ("%d",&elecc);
assert ((elecc == 0)||(elecc == 1));
int l;
if (elecc == 1) {
    l = todos_positivos (a,Tam);
    if (l == 1) {
    printf ("Son todos positivos ? = True");
    }
    else if (l==0) {
    printf ("Son todos positivos ? = False");
    }
}
else if (elecc == 0) {
    l = existe_positivo (a,Tam);
    if (l == 1) {
    printf ("Existe un positivo ? = True");
    }
    else if (l==0) {
    printf ("Existe un positivo ? = False");
    }
}
return 0;
}
