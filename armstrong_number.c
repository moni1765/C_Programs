#include <stdio.h>
void main() {
    int num,Num1, remainder, result = 0;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);
    Num1 = num;

    while (Num1 != 0) {
       
        remainder = Num1 % 10;
        
       result += remainder * remainder * remainder;
        
       
       Num1 /= 10;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

}
