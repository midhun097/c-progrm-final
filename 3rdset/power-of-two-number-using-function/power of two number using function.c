/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int powr(int base,int expo){
    int n=1;
    if(expo>0){
        for(int i=0; i<expo; i++){
            n=n*base;
        }
    }
    return n;
}

int main()
{
    int a,b,power;
    printf("enter two number for finding power: ");
    scanf("%d%d",&a,&b);
    power=powr(a,b);
    printf("power of your number is:%d",power);

    return 0;
}
