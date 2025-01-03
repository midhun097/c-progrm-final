/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
     int product=1;
     for(int i=1;i<=a;i++){
         product=product*i;
     }
     printf("product is %d",product);

    return 0;
}
