#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[1000];
	int i;
	printf("enter the string: ");
	gets(str);
	
	for(i = 0;i <= 1000;i++)
{
	if(str[i] >= 65 && str[i] <=90)
	str[i] = str[i] +32; 
}
printf("\nLower Case String is: %s", str);
	return 0;
}
