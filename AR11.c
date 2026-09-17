// Program (11) -> Write a program to check whether a given number is even or odd.

#include<stdio.h>
int main() {
    int num;
    printf("Enter your number: ");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("%d is even number", num);
    }
    else
    {
        printf("%d is odd number", num);
    }
    return 0;
}