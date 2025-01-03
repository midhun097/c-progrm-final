/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,flag=0;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(n%i==0){
            flag++;
        }
    }
    if(flag==2){
        printf("the given number is prime number");
    }
    else{
        printf("the given number is not prime");
    }
        


    return 0;
}