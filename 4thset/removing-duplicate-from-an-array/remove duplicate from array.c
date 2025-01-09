/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int arr[] = {12, 34, 5, 12, 7, 5, 23, 34, 8};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    int temp[size];  
    int newSize = 0; 
    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;  
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == temp[j]) {
                isDuplicate = 1;  
                break;
            }
        }
        if (!isDuplicate) {
            temp[newSize] = arr[i];
            newSize++;  
        }
    }
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", temp[i]);
    }
    printf("\n");

    return 0;
}
