/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a;
    printf("enter an alphabet: ");
    scanf("%c",&a);
     switch(a){
         case 'a': printf("a is a vowel");
         break;
         case 'e': printf("e is vowel");
         break;
         case 'i': printf("i is vowel");
         break;
         case 'o': printf("o is vowel");
         break;
         case 'u': printf("u is vowel");
         break;
         default: printf("%c is a consnant",a);
     }
    

    return 0;
}
