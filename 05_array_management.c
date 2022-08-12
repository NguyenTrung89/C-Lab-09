#include<stdio.h>
#include<stdlib.h>
#include <time.h>

int sizeOfArray = 20;

int getRandomNumber(int min,int max){
    int number;
    number = min + rand() % (max - min + 1);
    return number;
}

void init(int *ary) {
    int i;
    for (i = 0; i < sizeOfArray; i++) {
        ary[i] = getRandomNumber(0, 100);
    }
    printf("Array initialization successful!\n");
}

void display(int *ary) {
    int i;

    printf("Array elements:\n");
    for (i = 0; i < sizeOfArray; i++) {
        printf("%d ", ary[i]);
    }
}
int getMax(int *ary) {
    int maxValue;
    int i;

    maxValue = ary[0];
    for (i = 1; i < sizeOfArray; i++) {
        if (maxValue < ary[i]) {
            maxValue = ary[i];
        }
    }

    return maxValue;
}

float getAvg(int *ary) {
    float avg;
    int sum = 0;
    int i;

    for (i = 0; i < sizeOfArray; i++) {
        sum += ary[i];
    }
    avg = (float) sum / sizeOfArray;

    return avg;
}

void findValue(int *ary) {
    int val;
    int i, flag = 0;

    printf("Enter value to find: ");
    scanf("%d", &val);
    for (i = 0; i < sizeOfArray; i++) {
        if (val == ary[i]) {
            printf("Find %d at position %d\n", val, i + 1);
            ++flag;
        }
    }
    if (flag == 0) {
        printf("Not found %d in array!", val);
    }

}

void menu() {
    int choice;
    int *arr;
    
    arr = (int*)calloc(sizeOfArray, sizeof(int));
    printf("SizeOfArray = %d", sizeof(int));
    if (arr == NULL) {
        printf("Not enough memory!");
        exit(0);
    }

    while (1) {
        printf("\n-----------------------\n");
        printf("\tARRAY MANAGER:\n");
        printf("-----------------------\n");
        printf("1. Init\n");
        printf("2. Display\n");
        printf("3. Max value\n");
        printf("4. Avg value\n");
        printf("5. Search by value\n");
        printf("6. Exit\n");
        printf("-----------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                init(arr);
                break;
            case 2:
                display(arr);
                break;
            case 3:
                printf("MaxValue = %d\n", getMax(arr));
                break;
            case 4:
                printf("AvgValue = %.2f\n", getAvg(arr));
                break;
            case 5:
                findValue(arr);
                break;
            case 6:
                free(arr);
                exit(0);
        }

    }
}


int main() {
    menu();

    return 0;
}