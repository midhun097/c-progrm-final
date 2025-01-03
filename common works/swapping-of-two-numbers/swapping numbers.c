/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a=10;
    int b=20;
    int temp;
    printf("before swapping\n");
    printf("a=%d\n b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("after swapping\n");
    printf("a=%d\n b=%d",a,b);

    return 0;
}
