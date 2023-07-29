#include <stdio.h>
#include <string.h>

void swap(char *p, char *q) {
    char temp[20];
    strcpy(temp, p);
    strcpy(p, q);
    strcpy(q, temp);
}

int main() {
    char a[20], b[20];
    printf("Enter two strings: ");
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    // Remove the newline character from fgets
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    swap(a, b);
    printf("%s %s", a, b);
    return 0;
}