#include<stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>
int main(void){
    // loop variable and delta declaration
    int i;
    double delta;
    // reading the value for delta from user
    printf("Enter the value for delta (McLaurin series) ... \n");
    scanf("%lf" , &delta);
    printf("========================================== \n");

    // function declaration for arctanh1 and arctanh2
    double arctanh1 (double delta, double x);
    double arctanh2 (double x);
    // sampling start and stop point, and the step
    double start = -0.9;
    double end = 0.9;
    double step = 0.01;
    // Calculate the number of steps
    int num_steps = (int)((end - start) / step) + 1; 
    // Dynamically allocate memory for the arrays
    double *x = (double *)malloc(num_steps * sizeof(double));
    double *tanh1 = (double *)malloc(num_steps * sizeof(double));
    double *tanh2 = (double *)malloc(num_steps * sizeof(double));
    
    for (i = 0; i < num_steps; i++) {
        // populating x, tanh1 and tanh2
        x[i] = start + i * step;
        tanh1[i] = arctanh1(delta,x[i]);
        tanh2[i] = arctanh2(x[i]);
        printf("For x = %lf, the value of arctanh1 = %.10lf, arctanh2 = %.10lf, and the diff= %.10lf \n",x[i], tanh1[i], tanh2[i],fabs(tanh2[i]-tanh1[i]));
    }
}
// computing arctanh1 using McLauring series
double arctanh1 (double delta, double x){
    int n=0;
    double sum = 0;
    double val;
    // initializing sum_temp with a great value to enter while loop
    double sum_temp = DBL_MAX;
    while (fabs(sum_temp) >= delta){
        val = 2*n+1;
        sum_temp = pow(x,val)/val;
        sum += sum_temp;
        n++;
    }
    return sum;
}
// computing arctanh2 y using natural logarithm
double arctanh2 (double x){
    return (0.5*(log(1 + x) - log(1 - x)));
}