#include <stdio.h>

int main (){
	float nota1, nota2, nota3, nota4;

	printf ("Por favor digite a primeira de 4 notas a serem veirficadas suas médias aritméticas: \n");
	fflush (stdout);
	scanf ("%f", &nota1);

	printf ("Digite o segundo número: \n");
	fflush (stdout);
	scanf ("%f", &nota2);

	printf ("Digite o terceiro número: \n");
	fflush (stdout);
	scanf ("%f", &nota3);

	printf ("Digite o quarto número: \n");
	fflush (stdout);
	scanf ("%f", &nota4);

	float somaNotas = nota1+nota2+nota3+nota4;
	float mediaNotas = somaNotas/4;

	printf ("A média de suas notas é: %.2f", mediaNotas);
}
