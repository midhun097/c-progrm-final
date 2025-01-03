/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a,sum=0; // n to recieve a number , a for seprated number to be stored into a
    printf("enter the number: ");
    scanf("%d",&n);
    while(n>0){ // loop continues to run as long n is greater than 0
        a=n%10; //to seprate each number
        sum=sum+a; //seprated number gets added and stored to sum
        n=n/10; //number divided by 10
    }
    printf("sum of digits is %d",sum);

    return 0;
}