/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x,y,product=1;
    printf("enter value of x: ");
    scanf("%d",&x);
    printf("enter value f y: ");
    scanf("%d",&y);
    for(int i=1;i<=y;i++){
        product=product*x;
    }
    printf("exponent value of the number %d",product);

    return 0;
}