/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int countDigits(int n){
    int count=0;
     while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
int main()
{
    int num,count;
    printf("enter a number: ");
    scanf("%d",&num);
    count=countDigits(num);
    printf("no of digits in your number is : %d",count);

    return 0;
}
