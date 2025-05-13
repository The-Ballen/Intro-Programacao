#include <stdio.h>

int main() {
    float larg, comp, alt = 2.8, areaFinal, litros, latas;

    printf("Digite o valor da Largura: ");
    scanf("%f", &larg);
    printf("\nDigite o valor do Comprimento: ");
    scanf("%f", &comp);

    areaFinal = ( 2.0*alt*(larg + comp) ) - (0.8*2.1);

    litros = areaFinal / 3.0;
    latas = litros / 5.0;

    printf("%f Latas são necessárias para pintar %.2f m².", latas, areaFinal);

    return 0;
}
