/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,i,sum;
    
    printf("nth number: ");
    scanf("%d",&a);
    for( i=1;i<=a;i++)
    {
        if(i%2==0){
            sum=sum+i;
        }
    }
    printf(" sum of even  no s %d",sum);

    return 0;
}