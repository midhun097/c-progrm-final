/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    float radius;
    const float pi=3.14;
    printf("enter radius: ");
    scanf("%f",&radius);
    
    printf(" area of a circle is %.2f",pi*radius*radius);
    

    return 0;
}