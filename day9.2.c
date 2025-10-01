#include <stdio.h>

int main() 
{
    int percentage;

    printf("Enter your percentage (0-100): ");
    scanf("%d", &percentage);

    if (percentage < 0 || percentage > 100) {
        printf("Invalid input! Percentage must be between 0 and 100.\n");
    }
    else if (percentage >= 90) {
        printf("Grade: A\n");
    }
    else if (percentage >= 75) {
        printf("Grade: B\n");
    }
    else if (percentage >= 50) {
        printf("Grade: C\n");
    }
    else if (percentage >= 35) {
        printf("Grade: D\n");
    }
    else {
        printf("Grade: Fail\n");
    }

    return 0;
}
