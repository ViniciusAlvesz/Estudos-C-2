#include <stdio.h>

int main() {
	int valor1, valor2, valor3;

	printf ("Informe o valor 1 de 3 a serem somados ao quadrado: \n");
	fflush (stdout);
	scanf ("%d", &valor1);

	printf ("Selecione o segundo valor: \n");
	fflush (stdout);
	scanf ("%d", &valor2);

	printf ("Selecione o terceiro valor: \n");
	fflush (stdout);
	scanf ("%d", &valor3);

	int somaDosQuadrados = valor1*valor1 + valor2*valor2 + valor3*valor3;
	printf ("O valor da soma dos quadrados dos valores é: %d\n", somaDosQuadrados);
}
