#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

// Function to check if a string exists in the array
int contains(char *arr[], int size, char *value) {
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i], value) == 0) {
            return 1; // Found
        }
    }
    return 0; // Not found
}

// Function to find common elements between two string arrays
void find_common_elements(char *arr1[], int size1, char *arr2[], int size2, char *common[], int *common_size) {
    *common_size = 0;

    // Iterate through each element of the first array
    for (int i = 0; i < size1; i++) {
        // Check if the element is also present in the second array and not already added to common array
        if (contains(arr2, size2, arr1[i]) && !contains(common, *common_size, arr1[i])) {
            common[*common_size] = arr1[i];
            (*common_size)++;
        }
    }
}

int main() {
    char *arr1[MAX_SIZE] = {"apple", "banana", "orange", "pear", "grape"};
    int size1 = 5;

    char *arr2[MAX_SIZE] = {"banana", "pear", "kiwi", "grape", "melon"};
    int size2 = 5;

    char *common[MAX_SIZE];
    int common_size;

    // Find common elements
    find_common_elements(arr1, size1, arr2, size2, common, &common_size);

    // Print common elements
    printf("Common elements between the two arrays:\n");
    for (int i = 0; i < common_size; i++) {
        printf("%s\n", common[i]);
    }

    return 0;
}
