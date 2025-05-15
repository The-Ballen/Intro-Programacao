#include <stdio.h>

int main() {
    float diariaNormal, diariaPromo, arrecNormal, arrecPromo, diferenca;

    //printf("Digite a diária normal: ");
    scanf("%f", &diariaNormal);

    diariaPromo = diariaNormal * 0.75;
    arrecPromo = diariaPromo * (75*0.8);
    arrecNormal = diariaNormal * (75*0.5);
    diferenca = diariaPromo - diariaNormal;

    printf("\nDiária Promocional: %f", diariaPromo);
    printf("\nArrecadação com 80%% de ocupação e diária promocional: %f", arrecPromo);
    printf("\nArrecadação com 50%% de ocupação e diária normal: %f", arrecNormal);
    printf("\nDiferenca: %f\n", diferenca);

    return 0;
}
