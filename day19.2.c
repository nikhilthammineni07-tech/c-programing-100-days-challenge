#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    int n = num; 

    while(num != 0) {
        remainder = num % 10; 
        sum += remainder;      
        num = num / 10;       
    }

    printf("Sum of digits of %d = %d\n", n, sum);

    return 0;
}
