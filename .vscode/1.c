#include <stdio.h>

int main() {
    char str[20];
    int i = 0;  // Initialize the variable

    printf("Please enter here:\n");
    scanf("%s", str);

    // Check each character in the string
    while (str[i] != '\0') {
        if (str[i] != 'a') {  // If any character is not 'a', reject the string
            printf("Not accepted\n");
            return 0;  // Exit the program if a non-'a' character is found
        }
        i++;
    }

    // If all characters are 'a' or the string is empty, accept it
    printf("Accepted\n");

    return 0;
}
