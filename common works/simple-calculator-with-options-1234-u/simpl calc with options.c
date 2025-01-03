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
    printf("1=addition(+)\n2=subtraction(-)\n3=multiplication(*)\n4=division(/)\nselect a number: ");
    scanf("%d",&option);
    printf(" enter two numbers \n");
    scanf("%d%d",&a,&b);
    if(option==1){
        printf("addition is %d",a+b);
    }
    else if(option==2){
        printf("difference is %d",a-b);
    }
    else if(option==3){
        printf("product is %d",a*b);
    }
    else if(option==4){
        printf("quotient is %d",a/b);
    }
    else{
        printf("option is not included in this calculator");
    }

    return 0;
}