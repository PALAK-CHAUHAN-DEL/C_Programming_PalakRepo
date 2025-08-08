// Initialising structures.
#include <stdio.h>
#include <strings.h>

struct student {
    char name[20];
    int roll;
    float cgpa;
};

// Instead of declaring a variable and then assigning values to it, we can directly initialise the structure at the time of declaration.
// Depends on position of the members in the structure.
int main () {
    struct student S1 = {"Palak Chauhan", 116, 9.8};
    struct student S2 = {"Vansh Chauhan", 114, 9.9};
    struct student S3 = {"Priti", 117, 9.6};
    struct student S4 = {0}; // Initialising all members(fields) to zero.Just like how an array is initialised to 0;

    printf ("The name of the student is : %s\n", S1.name);
    printf ("The roll no of the student is : %d\n", S1.roll);
    printf ("The cgpa of the student is : %0.2f\n", S1.cgpa);


    return 0;
}