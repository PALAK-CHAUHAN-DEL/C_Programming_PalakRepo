// To see how content is read from a file.
#include <stdio.h>
int main () {
    FILE *fptr;
    fptr = fopen ("Test.txt", "r");
    char ch;
    char word[100];
    char sentence[200];
    if (fptr != NULL) {
        fscanf (fptr, "%c", &ch); // We use fscanf to read and store the data of the file.
        printf ("The 1st letter of the file is : %c\n", ch); // To print the 1st letter.

        fscanf (fptr, "%c", &ch); // Using this again will read the 2nd char. and so on.
        printf ("The 2nd letter of the file is : %c\n", ch); // To print the 2nd letter.

        fscanf(fptr, "%s", word); // To print the complete word.
        printf("The 1st word of the file is : %s\n", word);

        fgets(sentence, sizeof(sentence), fptr); // To read a complete sentence.
        printf("The sentence from the file is : %s\n", sentence);
    } else {
        printf ("File doesn't exist!\n");
    }
    fclose (fptr); // Don't forget this line at last.
    return 0;
}