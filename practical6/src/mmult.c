#include<stdio.h>

void mmultCalc (int n, int p, int q, double mat_a[n][p], double mat_b[p][q], double mat_c[n][q]){
    int i,j,k;
    
    for (k=0 ; k<n ; k++){                         
        for (i=0 ; i<q ; i++){                
            for (j=0 ; j<p ; j++){                  
                mat_c[i][k] += (mat_a[i][j]*mat_b[j][k]);                           
            }                                                                       
        }                                                                           
    }
}

