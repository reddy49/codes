#include<stdio.h>

//function declarations
unsigned int n;
int reg1(unsigned int reg);
int reg2(unsigned int reg);
int reg3(unsigned int reg);
int bin(unsigned int n);

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
	bin(reg);
}

//function 3
int reg3(unsigned int reg)
{
	 reg = ((n << 20) >> 20);
	bin(reg);
}

//display function
int bin(unsigned int n)
{
	int i;
	for(i = 1 << 30; i > 0; i = i >> 1) {
		if(n & i) {
			printf("1");
		} else 
			printf("0");
	}
	printf("\n");
}
/*int bin(unsigned int n)
{
	int i;
	for(i = 1 << 30; i > 0; i = i >> 1) {
		if(n & i) {
			printf("1");
		} else 
			printf("0");
	}
	printf("\n");
}
int bin(unsigned int n)
{
	int i;
	for(i = 1 << 30; i > 0; i = i >> 1) {
		if(n & i) {
			printf("1");
		} else 
			printf("0");
	}
	printf("\n");
}*/
