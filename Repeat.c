
#include <stdio.h>

int main() {
    char ch;

    // Loop until 'q' is entered.
    do {
        scanf(" %c", &ch); // Read a character. (Space before %c is to skip whitespace)
        printf("%c\n", ch); // Print the character.
    } while(ch != 'q'); // Continue until 'q' is entered.

    return 0;
}