// Waf to give out the char with most frequency in the string.Try to write it yourself.
// Neither am i able to understnad that.
#include <stdio.h>
#include <string.h>

void charFreq(char str[]) {
    int freq[26] = {0};  // initialising all values of the array to 0;
    int max = 0;
    char result = 'a';

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;  // increase the freq of that alphabet at that position.
            if (freq[str[i] - 'a'] > max) {
                max = freq[str[i] - 'a'];
                result = str[i];
            }
        }
    }
    printf("Character with highest frequency: %c (appears %d times)\n", result, max);
}

int main() {
    char str[100];
    printf("Enter a string (lowercase letters only): ");
    scanf("%s", str);
    charFreq(str);
    return 0;
}

/*so basically u mean that freq is an array that contains alphabets from a to z and at their respective positions their freq is stored.*/

//-----------------------------------------------------------------------------------------------------------------------------------------------


/*You are right that you never stored the actual letters in the array, but you don’t need to!
The freq array’s index represents each letter.

For example:

The value at freq[0] is the count of 'a'
The value at freq[1] is the count of 'b'
The value at freq[2] is the count of 'c'
... and so on.
You use the expression str[i] - 'a' to convert a letter like 'c' to its position (2), so you can increment
 the correct spot in the array. The array itself just holds numbers (the counts), not the letters.

So, the position in the array is the letter! That’s why you don’t need to store the letters themselves.*/