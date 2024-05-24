/*simple way to do it is


#include<stdio.h>

int main()
{
	char str[100]={'\0'};
	char friend1[100]={'\0'};
	char friend2[100]={'\0'};
	char friend3[100]={'\0'};
	
	printf("Enter your friends name: ");
	scanf("%[a-z , A-Z]",str);
	
	sscanf(str,"%s%s%s",friend3,friend2,friend1);
	printf("hi %s, %s, and %s",friend1,friend2,friend3);
}



*/
#include <stdio.h>

void print_friends_names(char *names) {
    char *friend1, *friend2, *friend3;

    // Extract individual names from the input string
    friend1 = names;
    while (*names && *names != ',') {
        names++;
    }
    if (*names == ',') {
        *names++ = '\0'; // Replace comma with null terminator
    }
    friend2 = names;
    while (*names && *names != ',') {
        names++;
    }
    if (*names == ',') {
        *names++ = '\0'; // Replace comma with null terminator
    }
    friend3 = names;

    // Print the greeting message in reverse order
    printf("Hi %s, %s and %s\n", friend3, friend2, friend1);
}

int main() {
    // Test the function
    char names[100];// = "Mahesh, Suresh, Devesh";
	printf("Enter your friends name: ");
	scanf("%[a-z , A-Z]",names);
    print_friends_names(names);

    return 0;
}

/*
Explanation:

void print_friends_names(char *names): This function takes a character pointer names as input, which is expected to be a string containing comma-separated names.

char *friend1, *friend2, *friend3;: These are pointers to characters, which will hold the addresses of the start of each name in the input string.

friend1 = names;: Initially, friend1 points to the beginning of the input string names.

while (*names && *names != ',') { names++; }: This loop iterates through the characters of the input string until it finds a comma or reaches the end of the string. 
It effectively moves the names pointer to the end of the first name.

if (*names == ',') { *names++ = '\0'; }: If a comma is found, it replaces the comma with a null terminator ('\0') and moves the names pointer to the beginning of the next name.

friend2 = names;: Now, friend2 is assigned the address of the beginning of the next name.

The second while loop and if statement do the same process for the second name.

friend3 = names;: Finally, friend3 is assigned the address of the beginning of the third name.

printf("Hi %s, %s and %s\n", friend3, friend2, friend1);: This line prints the names in reverse order, using the pointers friend3, friend2, and friend1, which now point to the beginnings of the third, second, and first names, respectively.

In the main function, scanf("%[a-z , A-Z]", names); reads input from the user until it encounters a character not in the specified range (lowercase letters, uppercase letters, spaces, and commas), storing it in the names array. Then, print_friends_names(names); calls the function to process and print the names.
*/

