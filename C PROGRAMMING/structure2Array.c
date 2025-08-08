// To learn abt creating arrays of structures.This is how we declare structure arrays and access it's elements.

#include <stdio.h>
#include <strings.h>

struct student {
     char name[20];
     int roll;
     float cgpa;
};

int main () {
    struct student cse [1]; // declaring the 1st array with 1 element.
    cse[0].roll = 116; 
    strcpy(cse[0].name, "Palak Chauhan");
    cse[0].cgpa = 9.8;

    printf ("the name of the student is : %s\n", cse[0].name);
    printf ("the roll no of the student is : %d\n", cse[0].roll);
    printf ("the cgpa of the student is : %0.2f\n", cse[0].cgpa);
    printf("\n");

    struct student ece [1]; // declaring the 2nd array with 1 element.
    ece[0].roll = 114;
    strcpy(ece[0].name, "Vansh Chauhan");
    ece[0].cgpa = 9.9;

    printf ("the name of the student is : %s\n", ece[0].name);
    printf ("the roll no of the student is : %d\n", ece[0].roll);
    printf ("the cgpa of the student is : %0.2f\n", ece[0].cgpa);
    printf("\n");

    return 0;
}