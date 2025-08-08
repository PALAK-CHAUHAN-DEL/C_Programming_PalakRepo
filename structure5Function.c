// Passing structure to a function.
#include <stdio.h>
#include <string.h>

// We have to define a structure before using it in the fuction unlike arrays and vectors, this is how it is.
struct student {   // I have used pointer here unnecessarily just for the sake of learning.
    char name[20];
    int roll;
    float cgpa;
};

void printInfo (struct student *ptr) {
     printf ("Name = %s\n", ptr -> name);
     printf ("Roll = %d\n", ptr -> roll);
     printf ("Cgpa = %0.2f", ptr -> cgpa);
}

int main () {
    struct student S1 = {"Palak Chauhan", 116, 9.8};
    struct student *ptr = &S1; // Pointer to the structure variable S1.
    printInfo (ptr);
    return 0; 
}

