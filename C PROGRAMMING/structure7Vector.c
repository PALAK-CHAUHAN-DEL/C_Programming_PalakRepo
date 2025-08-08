// Create a structure to store vectors.Then make a function ot return sum of teo vectors.
#include <stdio.h>
#include <strings.h>

// Try to relate it with other basic structure q to understand this one.
struct vector {
    int x;
    int y;
};

struct vector sum (struct vector v1, struct vector v2) { // Creating a function to return sum.
       struct vector result;  // this is a function of structure type.
       result.x = v1.x + v2.x;
       result.y = v1.y + v2.y;
       return result;
}

int main () {
    struct vector v1 = {1, 2};
    struct vector v2 = {3, 4};
    struct vector resultant = sum(v1, v2); // Calling the function to get the sum of two vectors.
    printf ("The sum of the two vectors is : (%d, %d)", resultant.x, resultant.y);
    return 0;
}
/*we are using a structure to store the return value of the sum function as the sum returns a structure*/