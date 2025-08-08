// Pointer to structure.Pg 47.
#include <stdio.h>
#include <strings.h>

struct student {
       char name[20];
       int roll;
       float cgpa;
};

int main () {
    struct student S1 = {"Palak Chauhan", 116, 9.8};
    struct student *ptr = &S1;
    
    printf ("The name of the student is : %s\n", (*ptr).name); //This will just tell the name.
    // While writing (*ptr).name, never forget to put (*ptr) in parenthesis.
    printf ("The roll no of the student is : %d\n", ptr->roll); // Using arrow operator to access the members of the structure.
    printf ("\n");

    printf ("All the details of the student are : %s, %d, %0.2f\n", (*ptr).name, (*ptr).roll, (*ptr).cgpa);
    return 0;
}