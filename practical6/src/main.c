#include <stdio.h>
#include <stdlib.h>
//- function to calculate the multiplication
void mmultCalc (int n, int p, int q, double mat_a[n][p], double mat_b[p][q], double mat_c[n][q]);
//- matrix dimensions
int n = 5;
int p = 3; 
int q = 4;
 
int main(void){
    //- defining the matrix and loop variables
    double mat_a[n][p];
    double mat_b[p][q];
    double mat_c[n][q];
    int i,j,k;
    //- Initializing matrix C, A and B
    for (i=0 ; i< sizeof(mat_c) / sizeof(mat_c[0]) ; i++ ){
        for (j=0 ; j< sizeof(mat_c[0]) / sizeof(mat_c[0][0]) ; j++){
	    mat_c[i][j] = 0;
	}
    }
    
    for (i=0 ; i< sizeof(mat_a) / sizeof(mat_a[0]) ; i++ ){
        for (j=0 ; j< sizeof(mat_a[0]) / sizeof(mat_a[0][0]) ; j++){
            mat_a[i][j] = i+j;
        }
    }
    for (i=0 ; i< sizeof(mat_b) / sizeof(mat_b[0]) ; i++ ){
        for (j=0 ; j< sizeof(mat_b[0]) / sizeof(mat_b[0][0]) ; j++){
            mat_b[i][j] = i-j;
        }
    }
    //- Calling mmultCalc function to compute the multiplication
    mmultCalc(n, p, q, mat_a, mat_b, mat_c);

    //- Printing matrices
    printf("mat_a= \n");
    for (i=0 ; i< sizeof(mat_a) / sizeof(mat_a[0]) ; i++ ){
        for (j=0 ; j< sizeof(mat_a[0]) / sizeof(mat_a[0][0]) ; j++){
	    printf("%lf  ",mat_a[i][j]);
	}
	printf("\n");
    }
    printf("mat_b= \n");
    for (i=0 ; i< sizeof(mat_b) / sizeof(mat_b[0]) ; i++ ){
        for (j=0 ; j< sizeof(mat_b[0]) / sizeof(mat_b[0][0]) ; j++){
	    printf("%lf  ",mat_b[i][j]);
	}
	printf("\n");
    }
    printf("mat_c= mat_a * mat_b  \n");
    for (i=0 ; i< sizeof(mat_c) / sizeof(mat_c[0]) ; i++ ){
        for (j=0 ; j< sizeof(mat_c[0]) / sizeof(mat_c[0][0]) ; j++){
	    printf("%lf  ",mat_c[i][j]);
	}
	printf("\n");
    }
    return 0;
}
