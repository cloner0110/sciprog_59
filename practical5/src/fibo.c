#include<stdio.h>
int main(void){
    // loop variable and n for fibo series
	int i,n;
    // fibo function declaration
    void fibo(int *a, int *b);
	// reading the value of n from user
	printf("Enter the n\n");
	scanf("%d",&n);

    // first two seq of fibonacci
    int f0 = 0;
    int f1 = 1;

    printf("fibonacci sequence = \n");
    printf("------------------- \n");
    // only printing first two seq
    printf("%d \n" , f0);
    printf("%d \n" , f1);

    for (i=2; i<=n;i++){
        // calling the fibo function to update the values of seq
        fibo(&f0,&f1);
        printf("%d \n" , f1);
    }
}
// fibo function definition, basically it updates the values of f_{n-1} and f_{n-2} to construct f_{n}
void fibo (int *a, int *b){
    int f;
    f = *a + *b;
    *a = *b;
    *b = f;
}
