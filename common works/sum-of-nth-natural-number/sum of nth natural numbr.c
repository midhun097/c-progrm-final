/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("n th number : ");
    scanf("%d",&a);
    // int sum=n*(n+1)/2;
    
    int sum=0;
    for(int i=1;i<=a;i++){
        sum=sum+i;
        // sum+=i;
    }
    printf("sum is %d",sum);
    

    return 0;
}