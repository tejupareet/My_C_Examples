#include <stdio.h>

int compare_strings(const char *str1, const char *str2) {
    int i = 0;

    // Compare strings character by character
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return i + 1; // Position where difference is found
        }
        i++;
    }

    // If one string is shorter than the other
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 0; // Strings are equal
    } else {
        return i + 1; // Second string is longer
    }
}

int main() {
    const char *str1 = "hello";
    const char *str2 = "hello";
    int result = compare_strings(str1, str2);

    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result == -1) {
        printf("Size of second string is more than the first string.\n");
    } else {
        printf("Strings are different at position %d.\n", result);
    }

    return 0;
}
