// Wap to store address  (House no., block, city , state) of 5 ppl.Done! Simple....
#include <stdio.h>
#include <string.h>

struct address {
    int houseNo;
    int block;
    char city[21];
    char state[21];
};

int main () {
    struct address a1 = {1, 2, "chennai", "Tamil Nadu"};
    struct address a2 = {2, 3, "mumbai", "Maharashtra"};
    struct address a3 = {34, 5, "ghz", "UP"};
    struct address a4 = {78, 8, "patna", "Bihar"};
    struct address a5 = {84, 3, "amravati", "AP"};
    
    printf ("The of 1st person is : %d, %d, %s, %s", a1.houseNo, a1.block, a1.city, a1.state);
    return 0; 
}
// Similarly we could have printed all the address but uk i am lazy!
