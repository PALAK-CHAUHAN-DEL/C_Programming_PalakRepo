// To understand the typedef in c.
#include <stdio.h>
#include <strings.h>

typedef struct computerEngineeringStudent {
    char name[21];
    int roll;
    float cgpa;
} ces; // Alias for struct computerEngineeringStudent.

int main () {
    ces S1 = {"Palak", 116, 9.8};
    printf ("The name of the student is : %s\n", S1.name);
    return 0;
}