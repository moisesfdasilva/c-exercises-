#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int num1, num2, res;

	printf("\nDigite um numero inteiro:\n");
	scanf("%d", &num1);

	if (num1 > 10) {
		res = pow(num1, (float) 1/2);
	} else {
		printf("\nDigite uma potencia:\n");
		scanf("%d", &num2);
		res = pow(num1, num2);
	}

	printf("\n  %d\n", res);

	system("pause");
	return 0;
}