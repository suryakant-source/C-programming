/*
Q11) Allocate memory dynamically for a character array to store first name,
then reallocate to store entire name, and display it.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *name;

    // Allocate memory for first name
    name = (char *)malloc(20 * sizeof(char));
    if(name == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter your first name: ");
    scanf("%s", name);

    // Reallocate memory for full name
    name = (char *)realloc(name, 50 * sizeof(char));
    if(name == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    printf("Enter your full name: ");
    getchar(); // clear newline left by previous scanf
    fgets(name, 50, stdin);

    // Remove newline character from fgets
    name[strcspn(name, "\n")] = '\0';

    printf("Your full name is: %s\n", name);

    free(name);
    return 0;
}
