#include <stdio.h>

int main() {
    int entrevistados = 0, clube, cidade, contGre = 0, contInt = 0, neutros = 0, continuar = 1;
    float salario = 0.0, salGre = 0.0, salInt = 0.0;

    while (continuar) {
        printf("\nClube (1-Grêmio, 2-Internacional, 3-Outros): ");
        scanf("%d", &clube);

        printf("\nSalário: ");
        scanf("%f", &salario);

        printf("\nCidade (0-Porto Alegre, 1-Outras): ");
        scanf("%d", &cidade);

        entrevistados++;

        if (clube == 1) {
            contGre++;
            salGre += salario;
        } else if (clube == 2) {
            contInt++;
            salInt += salario;
        } else if (cidade == 0) {
            neutros++;
        }

        printf("\nContinuar? (1-Sim, 0-Não): ");
        scanf("%d", &continuar);
    }

    if (contGre != 0)
        salGre /= (float) contGre;
    if (contInt != 0)
        salInt /= (float) contInt;

    printf("\nTorcedores:\ngrêmio - %d\nInternacional - %d", contGre, contInt);
    printf("\nMedia salarial:\ngrêmio: %.2f\nInternacional: %.2f", salGre, salInt);
    printf("\nNascidos em Porto Alegre que não torcem para nenhum dos dois times: %d", neutros);
    printf("\nEntrevistados: %d", entrevistados);

    return 0;
}
