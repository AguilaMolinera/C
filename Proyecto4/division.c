#include <stdio.h>
#include <assert.h>

struct div_t {
int cociente;
int resto;
};

struct div_t division(int x, int y){
     assert ((x>=0) && (y>0));
struct div_t par;
par.cociente =  (x/y);
par.resto = (x % y);

return (par);
}



int main () {
    int x,y;
    printf ("Ingrese dividendo\n");
    scanf ("%d",&x);
    printf ("Ingrese divisor\n");
    scanf ("%d",&y);
    assert ((x>=0) && (y>=0));
    if (y<=0) {
        printf ("error, el divisor no puede ser 0 \n");
    }
    else if (y>0) {
    struct div_t res = division(x,y);
    printf ("El cociente es : %d y el resto es : % d \n" , res.cociente, res.resto);
    }
    
}