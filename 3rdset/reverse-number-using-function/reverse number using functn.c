/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int reverseNo(int n){
    int rvn=0,r;
    while(n>0){
        r=n%10;
        rvn=rvn*10+r;
        n=n/10;
    }
    return rvn;
}


int main()
{
     int n,reversednumber;
    printf("Enetr a number to reverse : ");
    scanf("%d",&n);
    reversednumber=reverseNo(n);
    printf("reversed number is: %d",reversednumber);

    return 0;
}
