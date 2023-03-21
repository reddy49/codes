#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) 
{
//	if (argv != 5) {
//		exit(0);
//	}
	FILE *fp;
	FILE *fp1;
	int count = 0;
//	char ch[100];
	char c;
	fp = fopen(argv[3], argv[1]);
	fp1 = fopen(argv[4], argv[2]);
	c = fgetc(fp);
	while (c != EOF) {
		fputc(c, fp1);
		c = fgetc(fp);
	}
	fseek(fp1, 0, SEEK_SET);
	c = fgetc(fp1);
	while (c != EOF) {
		if(c == '\n') {
			count = count + 1;
		}
	c = fgetc(fp1);
	}
	printf("%d", count);
	fclose(fp);
	fclose(fp1);
}
