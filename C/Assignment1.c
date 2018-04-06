// Assignment 1: Write a program that repeatedly accepts user input and then prints the numbers 
// between 0 and the entered number. If the user enters a number less than or equal to zero, 
// the program will exit. 

#include <stdio.h>

int main(void)
{
	int number, i, cont;
	
	do {
		printf("Please enter the number to count towards:\n");
		scanf("%d", &number);
	
		if (number <= 0) {
			printf("[!] Please emter a positive number greater than 0!\n");
			cont = 0;
			return 0;
		}
	
		for(i = 0; i <= number; i++) {
			printf("[+] %d\n", i);
			cont = 1;
		} 
	} while (cont != 0);

	return 0;
}
