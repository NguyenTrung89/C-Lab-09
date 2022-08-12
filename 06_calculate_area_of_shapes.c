#include<stdio.h>
#include<math.h>
#include <stdlib.h>

#define PI 3.14

void areaOfTriangle() {
    float a, b, c, s, p;

    while (1) {
        printf("Enter 3 sides of the triangle:\n");
        printf("a = ");
        scanf("%f", &a);
        printf("b = ");
        scanf("%f", &b);
        printf("c = ");
        scanf("%f", &c);

        if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a) {
            break;
        } else {
            printf("Not sides of triangle. re-enter!\n");
        }
    }

    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Area of triangle is: %.2f\n", s);
}

void areaOfRectangle() {
    float a, b , s;

    while (1) {
        printf("Enter 2 side of the rectangle: \n");
        scanf("%f%f", &a, &b);

        if (a > 0 && b > 0) {
            break;
        } else {
            printf("Not sides of rectangle. re-enter!\n");
        }
    }

    s = a * b;
    printf("Area of rectangle is: %.2f\n", s);
}

void areaOfTrapezoid() {
    float a, h, s;

    while (1) {
        printf("Side of the trapezoid is: ");
        scanf("%f", &a);
        printf("Height of trapezoid is: ");
        scanf("%f", &h);

        if (a > 0 && h > 0) {
            break;
        } else {
            printf("Wrong input. Re-enter!\n");
        }
    }

    s = a * h;
    printf("Area of Trapezoid is: %.2f\n", s);
}

void areaOfCircle() {
    float r, s;

    while (1) {
        printf("Enter the radius: ");
        scanf("%f", &r);

        if (r > 0) {
            break;
        } else {
            printf("Not the circle radius, re-enter!\n");
        }
    }

    s = PI * pow(r, 2);
    printf("Area of circle is: %.2f\n", s);
}

void menu() {
    int choice;
    
    while (1) {
        printf("\nTINH DIEN TICH\n");
        printf("===================\n");
        printf("1. Tam giac\n");
        printf("2. Chu nhat\n");
        printf("3. Hinh thang\n");
        printf("4. Hinh tron\n");
        printf("5. Thoat\n");
        printf("===================\n");
        printf("Chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                areaOfTriangle();
                break;
            case 2: 
                areaOfRectangle();
                break;
            case 3: 
                areaOfTrapezoid();
                break;
            case 4: 
                areaOfCircle();
                break;
            case 5:
                exit(0);
        }

    }
}

int main() {
    menu();

    return 0;
}