#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
	int i = 0, num[10];

	do {
		printf("Digite %do numero:\n", i + 1);
		scanf("%d", &num[i]);
		i++;
	} while(i < 10);

	for (i = 0; i < 10; i++)
		printf("    %.lf\n", pow(num[i], 2));

	system("pause");
	return 0;
}