/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,r,rn=0;
    printf("enter a number : ");
    scanf("%d",&num);
    while(num>0){
        r=num%10;
        rn=rn*10+r;
        num/=10;
    }
    printf("ans is:%d",rn);

    return 0;
}