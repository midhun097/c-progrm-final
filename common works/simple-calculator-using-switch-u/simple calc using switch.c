/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,option;
     printf(" enter two numbers \n");
    scanf("%d%d",&a,&b);
    printf("1)=addition(+)\n2)=subtraction(-)\n3)=multiplication(*)\n4)=division(/)\nselect a number: ");
     scanf("%d",&option); 
     switch(option){
         case 1 :printf("addition of numbers = %d",a+b);
         break;
         case 2: printf("subtraction of numbers = %d",a-b);
         break;
         case 3: printf("multiplication of numbers = %d",a*b);
         break;
         case 4:printf("divsion of numbers = %d",a/b);
         break;
         default : printf("invalid input");
     }
    return 0;
}