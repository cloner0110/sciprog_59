#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//- function for the conversion from degrees to radians when needed. 

double degtorad(double degang) {
   return( (M_PI * degang)/180.0 );
}
//- function definition to be integrated
double func(double x){
    return (tan(x));

}

//- Trapezoid Function
double trap(int n, double h, double *fx){
    int i;
    double area = 0;
    area = 0.5 * h * (fx[0] + fx[n-1]);
    for (i = 1 ; i <=n-1 ; i++ )
    {
    area += h * fx[i];
    }
    return area;
}

int main(int argc, char **argv){
    //n: number of subintervals
    //a: x0, lower bound of the interval [a,b]
    //b: xn, upper bound of the interval [a,b]
    //h: the length of the subintervals 
    //area: approximation to the actual area
    //x: x=[a x1 ... b] vector where xi are pts along the interval
    //fx: fx =[f(a) f(x1) ... f(b)] vector where f(xi) is the value of the function at xi
    //diff: The difference between the approximated area and the actual result
    //tol: Tolerance difference between approximation and the actual result
    int n,i;
    double a, b, h, area;
    double diff, tol = 1e-06;
    //- Enter the values for a, b 
    a = degtorad(0);
    b = degtorad(60);
    //- Initialize values for diff and tol  
    n=11;
    diff = 1.0; 
    //- The interval [a,b] is split up into n subintervals of width h 
    h = (b-a)/n;

    //- Allocate x and fx vectors where x=[a x1 ... b]
    double *x = (double *) malloc(n*sizeof(double));
    double *fx = (double *) malloc(n*sizeof(double));

    //- Calculate the values of x and fx arrays 
    for(i=0; i<n; i++){
        x[i] = i*h;
    }
    for(i=0; i<n; i++){
        fx[i] = func(x[i]);
    }
    //- Call trap function to find an approximated value for the area
    area=trap(n,h,fx);

    //- Check and print the difference between calculated area and actual result
    diff=fabs(area - log(2.0));
    printf("Value of n = %d, area based on trapz = %12.10f, actual results ,ln(2) = %12.10f , diff is = %12.10f \n" ,n, area, log(2.0), diff);


    //- Free the memory space for x and fx
    free(x);
    free(fx);

    return 0; 
}