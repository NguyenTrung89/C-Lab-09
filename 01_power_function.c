/*Bài 01. Viết hàm power(int a, int n) trả về an . (int power(int a, int n))
Xây dựng chương trình cho phép nhập vào số nguyên a và số nguyên n. 
Sử dụng hàm power() định nghĩa ở trên để tính a^n */

#include<stdio.h>

int power(int a, int n) {
    int i, result = 1;
    for (i = 1; i <= n; i ++) {
        result *= a;
    }
    return result;
}

int main() {
    int a, n;
    int result;

    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap n:");
    scanf("%d", &n);
    
    result = power(a, n);
    printf("%d^%d = %d", a, n, result);

    return 0;
}