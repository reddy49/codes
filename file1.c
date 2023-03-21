#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp;
	fp = fopen("1.txt", "r");
	char str[30];
//	char c;
	while (fscanf(fp, "%s", str) != EOF) {
		printf("%s", str);
	}
	fclose(fp);
}
