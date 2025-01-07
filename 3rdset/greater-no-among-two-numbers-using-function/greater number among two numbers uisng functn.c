/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int Grt(int num1,int num2){
int great=(num1>num2)?num1:num2;
return great;
}
int main()
{
    int num1,num2,greatofnum;
    printf("enter two number: ");
    scanf("%d%d",&num1,&num2);
    greatofnum=Grt(num1,num2);
    printf("greater number is : %d",greatofnum);
    return 0;
}