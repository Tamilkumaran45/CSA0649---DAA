#include <stdio.h>
#include <math.h>
int countDigits(int number) {
    return (number == 0) ? 0 : 1 + countDigits(number / 10);
}
int sumOfPowers(int number, int power) {
    return (number == 0) ? 0 : pow(number % 10, power) + sumOfPowers(number / 10, power);
}
int isArmstrong(int number) {
    int digits = countDigits(number);
    return (number == sumOfPowers(number, digits));
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
