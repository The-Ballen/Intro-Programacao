#include <stdio.h>
#include <math.h>

int main() {
    float x, y, w, z, arit, harm, geom, pond;

    //Valores são inseridos aqui
    printf("Digite os valores de X, Y, W e Z: ");
    scanf("%f%f%f%f", &x, &y, &w, &z);

    arit = (x+y+w+z) / 4.0;
    harm = 4.0 / ( 1.0/x + 1.0/y + 1.0/w + 1.0/z );
    geom = pow((x*y*w*z), (0.25));
    pond = (2.0*x + 4.0*y + 6.0*w + 8.0*z) / (20.0);

    printf("\nMédia Aritmética: %f\nMédia Harmônica: %f", arit, harm);
    printf("\nMédia Geométrica: %f\nMédia Ponderada: %f\n", geom, pond);

    return 0;
}
