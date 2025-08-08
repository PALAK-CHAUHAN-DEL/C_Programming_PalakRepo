// To understand the basics of structures.
#include <stdio.h>
#include <string.h> // To be able to use strcpy function.

struct student {
    char name[20];
    int rollNo;
    float cgpa;
};

int main () {
    struct student S1; // Declare the variable first.
    strcpy(S1.name, "Palak Chauhan");
    S1.rollNo = 116;
    S1.cgpa = 9.8;

    printf ("The name of the student is : %s\n", S1.name);
    printf ("The roll no of the student is : %d\n", S1.rollNo);
    printf ("The cgpa of the student is : %0.2f\n", S1.cgpa);
    printf("\n");

    struct student S2;
    strcpy(S2.name, "Vansh Chauhan");
    S2.rollNo = 114;
    S2.cgpa = 9.9;

    printf ("The name of the student is : %s\n", S2.name);
    printf ("The roll no of the student is : %d\n", S2.rollNo);
    printf ("The cgpa of the student is : %0.2f\n", S2.cgpa);
    printf("\n");

    struct student S3;
    strcpy (S3.name, "Priti");
    S3.rollNo = 117;
    S3.cgpa = 9.6;

    printf ("The name of the student is : %s\n", S3.name);
    printf ("The roll no of the student is : %d\n", S3.rollNo);
    printf ("The cgpa of the student is : %0.2f\n", S3.cgpa);
    printf("\n");
    
    return 0;
}  
