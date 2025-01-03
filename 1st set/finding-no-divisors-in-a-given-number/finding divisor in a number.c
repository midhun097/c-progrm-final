/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,count=0;
    printf("enter a number:");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
            count++;
        }
    }
    printf("no of divisors  are: %d",count);
    

    return 0;
}