/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
  
    
int main() {
   int i;
    for(i=1;i <=100;i++)
        
    {
     if(i%3==0&&i%5==0){
       printf("fizz buzz\n");
       
   }
    
   else if(i%3==0){
       printf("fizz\n");
   }
   else if(i%5==0){
       printf("buzz\n");
   }
   else{
       printf("%d\n",i);
   }
    }
   
    return 0;
}