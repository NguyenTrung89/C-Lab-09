#include<stdio.h>
#include <string.h>
#include <stdlib.h>

void upperString(char *s) {
    int i;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= ('a' - 'A');
        }
    }
}

void lowerString(char *s) {
    int i;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += ('a' - 'A');
        }
    }
}

void menu() {
    int choice;
    char *s;

    s = (char*)calloc(100, sizeof(char));
    if (s == NULL) {
        printf("Not enough memory!");
        exit(0);
    }

    printf("Enter a string: ");
    gets(s);

    while (1) {
        printf("------------------\n");
        printf("1. Upper\n");
        printf("2. Lower\n");
        printf("3. Exit\n");
        printf("\n------------------\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                upperString(s);
                puts(s);
                break;
            case 2: 
                lowerString(s);
                puts(s);
                break;
            case 3:
                free(s);
                exit(0);

        }
    }
}

int main() {
    menu();

    return 0;
}