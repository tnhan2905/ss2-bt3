#include <stdio.h>

int main() {
    int a = 5;  
    int b = 8; 

    int sum, difference, product;
    float quotient;

    sum = a + b;
    difference = a - b;
    product = a * b;
    quotient = (float)a / b;

    // In ra ket qua 
    printf("Tong cua %d và %d là: %d\n", a, b, sum);
    printf("Hieu cua %d và %d là: %d\n", a, b, quotient);
     return 0;
}

