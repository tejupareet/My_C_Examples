#include <stdio.h>

int main() {
    char input_string[100];
    int ascii_array[100];
    int i = 0;

    // Input string from user
    printf("Enter a string: ");
    fgets(input_string, sizeof(input_string), stdin);

    // Convert each character to its ASCII value and store in the array
    while(input_string[i] != '\0') {
        ascii_array[i] = (int)input_string[i];
        i++;
    }

    // Print the array containing ASCII values
    printf("ASCII values of characters in the string:\n");
    for(int j = 0; j < i; j++) {
        printf("%d ", ascii_array[j]);
    }
    printf("\n");

    return 0;
}
