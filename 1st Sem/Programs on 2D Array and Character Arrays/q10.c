  /*
Q10) Convert the characters of any string to upper case without using any library functions
*/

#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int i = 0;
    while(str[i] != '\0') {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - ('a' - 'A');
        i++;
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}
