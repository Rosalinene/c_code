/*Title: Assignment 2 - LAB 2 - PART 2

Author: Huong Pham

Date: 10/16/2023

Course and Section: CSC 211-302

Description: Create a C program that:

Prompt a user to enter a number of integers
Use malloc to allocate space on the heap to hold that many integers
Take in the integer
Sum the integers
Display the list of integers
Display the sum
Deallocate the space used from the heap
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
//Variables
int numInteger;
int *addr;
int sum = 0;
int i;

//Promt user
printf("How many number do you want to enter: ");
scanf("%d", &numInteger); 
addr = (int*)malloc(numInteger*sizeof(int));
fflush(stdin);

// Prompt for and read the integers
printf("Enter %d integers:\n", numInteger);
for (int i = 0; i < numInteger; i++) 
{
    printf("Integer %d: ", i + 1);
    scanf("%d", &addr[i]);
    sum += addr[i];
}

// Display the list of integers
printf("List of integers:\n");
for (int i = 0; i < numInteger; i++) 
{
    printf("%d ", addr[i]);
}
printf("\n");

// Display the sum
printf("\nThe sum is: %d\n", sum);

// Deallocate the allocated memory
free(addr);

return 0;
}//End main