#include<stdio.h>

//function declarations
unsigned int n;
int set();

//main function
int main()
{
	printf("Enter number\n");	//taking user input
	scanf("%d", &n);
	set();	//calling function
}

//function to clear 7 bit
int set()
{
	if ((n | (1 << 1)) == n) {
		n = n & (n - 64);
		for (int i = 1 << 7; i > 0; i = i >> 1) {
			if (n & i) {
				printf("1");
			} else {
				printf("0");
			}
		}
	} else 
		printf("2 bit is not set");
}
