#include <stdio.h>

int main () {
	float aposta1, aposta2, aposta3, premio = 0;
	float total, parte1, parte2, parte3 = 0;

	printf ("Digite o valor apostado pelo primeiro participante: \n");
	fflush (stdout);
    if (scanf("%f", &aposta1) != 1) {
        printf("Erro: por favor, insira apenas números válidos.\n");
        return 0;
    }

	printf ("Digite o valor apostado pelo segundo participante: \n");
	fflush (stdout);
    if (scanf("%f", &aposta2) != 1) {
        printf("Erro: por favor, insira apenas números válidos.\n");
        return 0;
    }

	printf ("Digite o valor apostado pelo terceiro participante: \n");
	fflush (stdout);
    if (scanf("%f", &aposta3) != 1) {
        printf("Erro: por favor, insira apenas números válidos.\n");
        return 0;
    }

	printf ("Digite o valor total do prêmio: \n");
	fflush (stdout);
    if (scanf("%f", &premio) != 1) {
        printf("Erro: por favor, insira apenas números válidos.\n");
        return 0;
    }

	//soma total das apostas
	total = aposta1 + aposta2 + aposta3;

    // Cálculo proporcional
	parte1 = (aposta1/total) * premio;
	parte2 = (aposta2/total) * premio;
	parte3 = (aposta3/total) * premio;

	//exibe os valores

	printf("\n --Valor recebido por cada participante--\n");
	printf("Amigo 1 receberá: %.2f\n", parte1);
	printf("Amigo 2 receberá: %.2f\n", parte2);
	printf("Amigo 3 receberá: %.2f\n", parte3);

	return 0 ;
}


































/*
#include <stdio.h>

int main() {
    float aposta1, aposta2, aposta3, premio;
    float total, parte1, parte2, parte3;

    // Leitura das apostas
    printf("Digite o valor apostado pelo amigo 1: ");
    scanf("%f", &aposta1);

    printf("Digite o valor apostado pelo amigo 2: ");
    scanf("%f", &aposta2);

    printf("Digite o valor apostado pelo amigo 3: ");
    scanf("%f", &aposta3);

    // Leitura do prêmio
    printf("Digite o valor total do prêmio: ");
    scanf("%f", &premio);

    // Soma total das apostas
    total = aposta1 + aposta2 + aposta3;

    // Cálculo proporcional
    parte1 = (aposta1 / total) * premio;
    parte2 = (aposta2 / total) * premio;
    parte3 = (aposta3 / total) * premio;

    // Exibe os valores
    printf("\n--- Resultado ---\n");
    printf("Amigo 1 receberá: R$ %.2f\n", parte1);
    printf("Amigo 2 receberá: R$ %.2f\n", parte2);
    printf("Amigo 3 receberá: R$ %.2f\n", parte3);

    return 0;
}
*/
