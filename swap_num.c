#include<stdio.h>

//function declarations
int swap(unsigned int n);
int bin(unsigned int n);

//main function
int main()
{
	unsigned int n;
	swap(n); 	//function calling
}

//function to swap
int swap(unsigned int n)
{
	unsigned int t;
	n = 0x12345678;
	t = ((n << 28) | (n >> 28) | (((n << 4)>>8) << 4));
	bin(t);
	bin(n);
}

//function to display
int bin(unsigned int n) 
{
	for (unsigned int i = 1 << 31; i > 0; i = i >> 1) {
		if (n & i) {
			printf("1");
		} else 
			printf("0");
	}
	printf("\n");
}
