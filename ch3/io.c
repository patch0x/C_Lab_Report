/* program to read a line of text from user using scanf() function and isplay the entered line of text on the screen using printf() function */

#include <stdio.h>

int main() {
    printf("Enter text to echo: ");
    char text[100];
    scanf("%[^\n]", &text);
    printf("%s\n", text);
}
