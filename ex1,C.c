#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,t,sum = 0,x;

	printf("Enter an integer\n");
	scanf("%d", &n);
	
	t = n;
	while (t != 0)
	{
		x = t % 10;
		sum = sum + x;
		t = t/10;
		
	}
	printf("Sum of digits of %d = %d\n", n,sum);
	return 0;
}
