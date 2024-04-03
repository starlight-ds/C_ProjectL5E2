/*
 * JazminnaSmirni_Lab5Exercise2.c
 *
 *  Created on: Feb 29, 2024
 *      Author: jsmirni
 */


#include <stdio.h>
int product1(int n1, int n2);
int product2(int p, int n1, int n2);

int
main(void)
{
	setvbuf(stdout, NULL,_IONBF, 0);
	int n1, n2, m1, m2;

	FILE *file;
	file = fopen("integers.txt", "r");
	fscanf(file, "%d %d", &m1, &m2);

	fclose(file);

	int result1 = product1(m1, m2);
	printf("product 1 = %d \n", result1);

	int result2 = product2(result1, m1, m2);
	printf("product 2 = %d \n", result2);

	printf("Enter first value: \n");
	scanf("%d", &n1);

	printf("Enter second value: \n");
	scanf("%d", &n2);


	result1 = product1(n1, n2);
	printf("product 1 = %d \n", result1);

	result2 = product2(result1, n1, n2);
	printf("product 2 = %d \n", result2);


	return 0;
}

int product1(int n1, int n2)
{
	int p = n1* n2;
	return(p);
}
int product2(int p, int n1, int n2)
{
	return(p * n1 * n2);
}

