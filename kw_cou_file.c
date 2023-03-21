#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main()
{
	FILE *fp;
	fp = fopen("input1.txt", "r");
	char ch[4][10];
	char str1[10];
	char str2[10];
	char str3[10];
	char str4[10];
	int i;
	int j = 0;
	int p = 0;
	char str5[100];
	printf("Enter keywords");
	for (i = 0;i < 4; i++) {
		scanf("%s", ch[i]);
	}
	strcpy(str1,ch[0]);
	strcpy(str2,ch[1]);
	strcpy(str3,ch[2]);
	strcpy(str4,ch[3]);
	char c;
	i = 0;
	int count = 0;
	char str;
	char c1;
	fseek(fp,0,SEEK_SET);
	int b = 0;
	while ((c1 = fgetc(fp)) != EOF) {
		str5[b] = c1;
		b++;	
	}
	int len = strlen(str5);
	fseek(fp,0,SEEK_SET);
	while ((c = fgetc(fp)) != EOF) {
		if (i < strlen(str5)) {
			if ((str5[i] == str1[p])) {
				j++;
				if (j == strlen(str1)) {
					count = count + 1;
					p = -1;
					j = 0;
				}
			p++;
			
			}
		i++;
		}
	}
	printf("1st keyword %s =%d\n",str1,count);
	int res = ftell(fp);
//	printf("fp = %d\n", res);
	i = 0;
	p = 0;
	j = 0;
	count = 0;
	fseek(fp, 0 ,SEEK_SET);
	while ((c = fgetc(fp)) != EOF) {
		if (i < strlen(str5)) {
			if(str5[i] == str2[p]) {
				j++;
				if (j == strlen(str2)) {
					count = count + 1;
					p = -1;
					j = 0;
				}
			p++;
			}
			i++;
		}
	}
	printf("second keyword %s =%d\n",str2, count);
	i = 0;
	p = 0;
	j = 0;
	count = 0;
	fseek(fp, 0 ,SEEK_SET);
	while ((c = fgetc(fp)) != EOF) {
		if (i < strlen(str5)) {
			if(str5[i] == str3[p]) {
				j++;
				if (j == strlen(str3)) {
					count = count + 1;
					p = -1;
					j = 0;
				}
			p++;
			}
			i++;
		}
	}
	printf("third keyword %s =%d\n",str3, count);
	count = 0;
	i = 0;
	p = 0;
	j = 0;
	fseek(fp, 0 ,SEEK_SET);
	while ((c = fgetc(fp)) != EOF) {
		if (i < strlen(str5)) {
			if(str5[i] == str4[p]) {
				j++;
				if (j == strlen(str4)) {
					count = count + 1;
					p = -1;
					j = 0;
				}
			p++;
			}
			i++;
		}
	}

	printf("forth keyword %s =%d",str4, count);
//	printf("%s", str5); 
	fclose(fp);
}
