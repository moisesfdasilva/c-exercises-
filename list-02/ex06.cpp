#include<stdio.h>
#include<stdlib.h>

int doble(int value) {
	return value * 2;
}

int main() {
	int num;

	printf("\nDigite um valor inteiro:\n");
	scanf("%d", &num);

	printf("O dobro desse valor:\n%d\n", doble(num));

	system("pause");
	return 0;
}