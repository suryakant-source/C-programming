/*
Q7) Input time in seconds and convert to hours, minutes, and remaining seconds.
*/

#include <stdio.h>

int main() {
    int sec, h, m, s;
    printf("Enter time in seconds: ");
    scanf("%d", &sec);
    h = sec / 3600;
    sec %= 3600;
    m = sec / 60;
    s = sec % 60;
    printf("%d hour(s) %d minute(s) %d second(s)\n", h, m, s);
    return 0;
}
