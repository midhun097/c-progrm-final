/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int arr[] = {12, -5, 0, 7, -3, 8, 0, -1};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positiveCount++;  
        } else if (arr[i] < 0) {
            negativeCount++;  
        } else {
            zeroCount++;  
        }
    }
    printf("Number of positive elements: %d\n", positiveCount);
    printf("Number of negative elements: %d\n", negativeCount);
    printf("Number of zero elements: %d\n", zeroCount);

    return 0;
}
