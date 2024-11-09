#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//- factorial function declaration
double factorial (int x);

int main(void){
    int poly_order, i;
    double *terms;
    //- reading the polynomial order from user input
    printf("please enter the order of polynomial \n");
    scanf("%d", &poly_order);

    //- dynamically allocating terms, based on poly_order
    terms = (double *)malloc(poly_order * sizeof(double));
    //- calulating each term
    for (i = 0 ; i < poly_order ; i++ ){
	terms[i] = 1/factorial(i+1);
    }
    double estimation = 1;
    //- loop for printing
    for (i = 0 ; i < poly_order ; i++ ){
      estimation += terms[i];
    }
    printf("estimated value of e with order of polynomial = %d, is: %f \n",poly_order, estimation);
    //- free the dynamic array
    free(terms);
    return 0;
}
//- function to calculate factoriel
double factorial (int x){
    double res = 1;
    while (x != 1){
       res = res * x;
       x = x-1;
    }
    return res;
}
