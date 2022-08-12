//Bài 02.

#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#include <stdlib.h>

int inputNumber() {
    int intNumber;
    printf("Enter a integer: ");
    scanf("%d", &intNumber);

    return intNumber;
}

void checkNumber(int num) {
    bool isPrime = true;
    int i;

    if (num <= 1) {
        isPrime = false;
    }
    for (i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime == false) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
}

int main() {
    int userInput;
    printf("Enter 0 if you want to stop!\n\n");
    while(1) {
        userInput = inputNumber();
        checkNumber(userInput);
        if (userInput == 0) {
            exit(0);
        }
    }
    

    return 0;
}