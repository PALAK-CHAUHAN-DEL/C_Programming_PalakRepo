/* Wap to create a salted form of the password entered by the user, if the salt is : "123" 
& added at the end.
I am creating functions unnecessarily to get familiar with it's use. Written this code myself. */

#include <stdio.h>
#include <string.h>

void saltPass (char pass[30], char salt[]) {
     strcat (pass, salt);
     printf ("The salted password is : %s", pass);
}

int main () {
    char pass[30];
    char salt[] = "123";
    printf ("Enter the password : ");
    fgets (pass, 30, stdin);

    pass [strcspn(pass, "\n")] = '\0'; // This is to remove the newline character if present which soesn't let the 2 strings join.

    saltPass (pass, salt);
    return 0; 
}

