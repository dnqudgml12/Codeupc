#include <stdio.h>

int main() {
    int n;

    // Label for the repeated block of code.
    reload: 

    // Read the integer.
    scanf("%d", &n);

    // Check if the number is not 0.
    if (n != 0) {
        // Print the integer if it's not 0.
        printf("%d\n", n);
        
        // Repeat the process by going to the label "reload".
        goto reload; 
    }

    // Exit the program.
    return 0;
}
