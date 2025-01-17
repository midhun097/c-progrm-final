#include <stdio.h>
#include <string.h>

#define maxmstudents 3
#define maxm_namelength 50

struct Student {
    char name[maxm_namelength];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[maxmstudents];

    
    for (int i = 0; i < maxmstudents; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        fgets(students[i].name, maxm_namelength, stdin);
        students[i].name[strcspn(students[i].name, "\n")] = 0; 

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        getchar(); // 

        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); 
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < maxmstudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}