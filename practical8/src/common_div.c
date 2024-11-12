#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int iterative (int a, int b);
int recursive (int a, int b);
void main(){
  int a,b;
  printf("Please enter two positive numbers ... \n");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("--------------------\n");
  printf("gcd of (%d,%d) using iterative function = %d \n",a,b,iterative(a,b));
  printf("gcd of (%d,%d) using recursive function = %d \n",a,b,recursive(a,b));
}
int iterative (int a, int b){
  int temp;
  while (b != 0){
    temp = b;
    b = a%b;
    a = temp;
  }
  return a;
}
int recursive (int a, int b){
  if (b==0){
    return a;
  }
  else {
    return(recursive(b, a%b));
  }
}
