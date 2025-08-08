// The only difference is that we take input of address from user here.
// Wap to store address  (House no., block, city , state) of 5 ppl....
#include <stdio.h>
#include <string.h>

struct address { // Declaring the structure.
    int houseNo;
    int block;
    char city[21];
    char state[21];
};

void printAddress (struct address add); // Function prototype to print address.

int main () {
    struct address adds[5];

    // Inputting the data.
    printf ("Enter info for person 1 : ");
    scanf ("%d", &adds[0].houseNo);
    scanf ("%d", &adds[0].block);
    scanf ("%s", adds[0].city);
    scanf ("%s", adds[0].state);

    printf ("Enter info for person 2 : ");
    scanf ("%d", &adds[1].houseNo);
    scanf ("%d", &adds[1].block);
    scanf ("%s", adds[1].city);
    scanf ("%s", adds[1].state);

    printf ("Enter info for person 3 : ");
    scanf ("%d", &adds[2].houseNo);
    scanf ("%d", &adds[2].block);
    scanf ("%s", adds[2].city);
    scanf ("%s", adds[2].state);

    printf ("Enter info for person 4 : ");
    scanf ("%d", &adds[3].houseNo);
    scanf ("%d", &adds[3].block);
    scanf ("%s", adds[3].city);
    scanf ("%s", adds[3].state);

    printf ("Enter info for person 5 : ");
    scanf ("%d", &adds[4].houseNo);
    scanf ("%d", &adds[4].block);
    scanf ("%s", adds[4].city);
    scanf ("%s", adds[4].state);

    printAddress (adds[0]);
    printAddress (adds[1]);
    printAddress (adds[2]);
    printAddress (adds[3]);
    printAddress (adds[4]);
    return 0;
}

/*Yes, you can pass any element of the array (like adds[0], adds[1], etc.)
as an argument to the function. The parameter name in the function definition 
(like add) can be any valid variable name—it does not need to match the name of 
the array or the argument you pass. The function will use the value you pass,
and refer to it by the parameter name inside the function.*/