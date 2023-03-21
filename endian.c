#include<stdio.h>

int main()
{
	unsigned int i = 12;
	char c = (char)&i;
	if(c) {
		printf("little endian");
	} else {
		printf("big endian");
	}
}
