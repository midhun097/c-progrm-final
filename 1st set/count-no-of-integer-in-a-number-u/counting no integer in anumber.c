/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=0,n;
    printf("enter your no: ");
    scanf("%d",&n);
    do{
        n/=10;
        a++;
    }while(n!=0);
    printf("no of digits in your number %d",a);


    return 0;
}
