/* Program (20)-> Write a program to accept the elements of a one-dimentional array and calculate the sum of all its elements. 

solution (2): using while loop
*/

#include <stdio.h>
int main() {
    int arr[5], i = 0, sum = 0;
    printf("Enter 5 elements of the array:\n");
    while (i < 5) 
    {
        printf("Enter elements at index %d:", i);
        scanf("%d", &arr[i]);
        i++;
    }
    i=0;
    while(i<5)
    {
        sum = sum + arr[i];
        i++;
    }
    printf("\n Sum of all array elements = %d", sum);
    return 0;
}