#include <stdio.h>
/*
void reverseWords(char *s) {
    char *word_start = s;
    char *word_end = s;
    char *word_starts[50]; // Array to store pointers to start of each word

    int word_count = 0;

    // Find the end of each word and store pointers to start of each word
    while (*word_end != '\0') {
        if (*word_end == ',') {
            word_starts[word_count++] = word_start;
            word_start = word_end + 2; // Skip comma and space
        }
        word_end++;
    }
    // Store the last word as well
    word_starts[word_count++] = word_start;

    printf("Hi ");
    // Print each word in reverse order
    for (int i = word_count - 1; i >= 0; i--) {
        char *p = word_starts[i];
        while (*p != '\0' && *p != ',') {
            printf("%c", *p);
            p++;
        }
        if (i != 0)
            printf(", ");
    }
}

int main() {
    char input[] = "Mahesh, Suresh, Devesh, Ramesh";
    reverseWords(input);
    printf("\n");
    return 0;
}
*/
/*
void print_reverse(char str[]);

int main()
{
	char str[100];
	printf("Enter the string : ");
	scanf("%[a-z , A-Z]",str);
	
	print_reverse(str);
	
	return 0;
}

void print_reverse(char *str)
{
	int i=0,j=0,n=0,m,k=0,comma=0;
	while(str[i]!='\0')
	{
		if(str[i]==',')
		{
			comma++;
		}
		if((str[i]==',')&&j<=0)
		{
			j=i;
		}
		if((j>0)&&(str[i]==','))
		{
			n=i;
		}
		i++;
	}
	printf("number of commas : %d\n",comma);
	printf("%d %d %d\n",j,n,i);
	
	printf("Hi ");
	while(comma)
	{
		for(m=i; str[m]!='\0'; m++)
		{
			printf("%c",str[m]);
			
		}
		comma--;
	}
	
	
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
	scanf("%[a-z , A-Z]",names);
    print_friends_names(names);

    return 0;
}

