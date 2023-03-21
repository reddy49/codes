#include<stdio.h>

//function declarations
unsigned int n;
int reg1(unsigned int reg);
int reg2(unsigned int reg);
int reg3(unsigned int reg);
int bin(unsigned int n);
int bin1(unsigned int n);
int bin2(unsigned int n);

//main function
int main()
{
	int reg;
	printf("Enter number\n");	//taking use input
	scanf("%d", &n);
	reg1(reg); 	//calling function 1
	reg2(reg); 	//calling function 2
	reg3(reg);	//calling function 3
	return 0;
}

//function 1
int reg1(unsigned int reg)
{
	reg = ((n >> 22) << 22);
	bin(reg);
}

//function 2
int reg2(unsigned int reg)
{
	reg = (((n >> 22) << 22) >> 10);
	bin1(reg);
}

//function 3
int reg3(unsigned int reg)
{
	 reg = ((n << 20) >> 20);
	bin2(reg);
}

//display function 1
int bin(unsigned int n)
{
	unsigned int i;
	for(i = 1 << 31; i > (1 << 21); i = i >> 1) {
		if(n & i) {
			printf("1");
		} else 
			printf("0");
		}
	printf("\n");
}

//display function 2
int bin1(unsigned int n)
{
	unsigned int i;
	for(i = 1 << 21; i > (1 << 11); i = i >> 1) {
		if(n & i) {
			printf("1");
		} else 
			printf("0");
		}
	printf("\n");
}

//display function 3
int bin2(unsigned int n)
{
	unsigned int i;
	for(i = 1 << 11; i > 0; i = i >> 1) {
		if(n & i) {
			printf("1");
		} else 
			printf("0");
		}
	printf("\n");
}
