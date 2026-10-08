/* Program (21)-> Write a program to accept the elements of a one-dimentional array and calculate the sum of all its elements.

solution (3`): using do-while loop
*/

#include<stdio.h>
int main() {
    int arr[5], i = 0, sum = 0;
    
    do
    {
        printf("Enter elements at index %d:", i);
        scanf("%d", &arr[i]);
        i++;
    } while (i < 5);

    i=0;
    do
    {
        sum = sum + arr[i];
        i++;
    } while(i<5);

    printf("\n Sum of all array elements = %d", sum);
    return 0;
}