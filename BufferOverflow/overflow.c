#include <stdio.h>
#include <string.h>

int main() {
    char buffer[10];
    printf("Enter a string: ");
    gets(buffer);
    printf("You entered: %s\n", buffer);
    return 0;
}

// \0- null terminator -end of the string. 
// gets(buffer), - store more than 9 characters, causing a buffer overflow.