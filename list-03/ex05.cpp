#include<stdio.h>
#include<stdlib.h>

int main() {
	int max;

	printf("Digite o limite superior do intervalo(maior que zero):\n");
	scanf("%d", &max);

	for (int i = 1; i < max; i += 2)
		printf("    %d\n", i);

	system("pause");
	return 0;
}