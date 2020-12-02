#include <stdio.h>
#include <string.h>

//FIND AND FIX THE MISTAKES IN THIS CODE

void main() {
    char password[80];

    printf("\nCreate a password:");
    scanf("%s", password);

    int passwordLength;
    passwordLength = strlen(password);
    printf("\nYour password is %s and is %i characters long", password, passwordLength);
}
