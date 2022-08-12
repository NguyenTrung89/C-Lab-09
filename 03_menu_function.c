//Bài 03.

#include<stdio.h>
#include <stdlib.h>

int inputNumberInRange(int min, int max) {
    int userInput;
    while (1) {
        printf("Chon: ");
        scanf("%d", &userInput);
        if (userInput >= min && userInput <= max) {
            break;
        } else {
            printf("Nhap sai. Hay nhap 1 so (%d, %d)!\n", min, max);
        }
    }

    return userInput;
}

// int inputTwoNumber() {
//     int a, b
//     printf("Nhap a: ");
//     scanf("%d", &a);
//     printf("Nhap b: ");
//     scanf("%d", &b);

//     return userInput;
// }

int sum(int a, int b) {
    int sum;
    sum = a + b;

    return sum;
}

int sub(int a, int b) {
    int sub;
    sub = a - b;

    return sub;
}

int multi(int a, int b) {
    int multi;
    multi = a * b;

    return multi;
}

double division(int a, int b) {
    double result;
    result = a / b;

    return result;
}

void menu() {
    int choice;
    int a, b;

    while (1) {
        printf("\nTINH TOAN\n");
        printf("=====================\n");
        printf("1. Nhap so\n");
        printf("2. Tinh tong\n");
        printf("3. Tinh hieu\n");
        printf("4. Tinh tich\n");
        printf("5. Tinh thuong\n");
        printf("6. Thoat\n");
        printf("=====================\n");
        choice = inputNumberInRange(1, 6);

        switch (choice) {
            case 1:
                printf("Nhap a: ");
                scanf("%d", &a);
                printf("Nhap b: ");
                scanf("%d", &b);
                break;
            case 2:
                printf("sum = %d\n", sum(a, b));
                break;
            case 3:
                printf("sub = %d\n", sub(a, b));
                break;
            case 4:
                printf("multi = %d\n", multi(a, b));
                break;
            case 5:
                //division(a,b);
                if (b == 0) {
                    printf("Err!");
                } else {
                    printf("div = %.2lf\n", division(a, b));
                }
                break;
            case 6:
                exit(0);
    }

    }
}

int main() {
    menu();

    return 0;
}