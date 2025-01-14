#include <stdio.h>

// Function declaration: returning a char
char getCharacter() {
    return 'A';  // return a character
}

int main() {
    // Calling the function and storing the returned value
    char result = getCharacter();

    // Printing the result
    printf("The returned character is: %c\n", result);

    return 0;
}
