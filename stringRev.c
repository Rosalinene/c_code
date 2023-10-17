/*Title: Assignment 2 - LAB 2 - PART 1

Author: Huong Pham

Date: 10/16/2023

Course and Section: CSC 211-302

Description: Create a C program that takes in a String and then displays that string back out in reverse. The following must be used:

Store the string that is being taken in on the heap (malloc).
Ask the user for a string length before taking in their string.
Use the string stored on the hep to print out or create the reverse string.
Deallocate the used heap space when you are done with it.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseString(char *str) 
{
    int len;
    len = strlen(str);
    for (int i = 0; i < len / 2; i++) 
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }//End for loop
}//End reverseString

int main()
{
//Varibles
int strlen;
char *strAddr;

//promt user
printf("Enter the length of your string: ");
scanf("%d", &strlen);

// Allocate memory for the string
strAddr = (char*)malloc((strlen + 1)*sizeof(char));
fflush(stdin);

printf("Enter your string: ");
//fgets(strAddr, len +1, stdin);
scanf(" %[^\n]s", strAddr);

// Reverse the string
reverseString(strAddr);

// Display the reversed string
printf("Reversed string: %s\n", strAddr);

// Deallocate the allocated memory
free(strAddr);

return 0;
}//End main (Lab1)

