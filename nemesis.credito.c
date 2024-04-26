#include <stdio.h>

int main() {
    float monto_credito, interes_anual, total_anual, total_pagar = 0, pago_mensual;
    int tiempo_anios, i;

    printf("Ingrese el monto total del credito: ");
    scanf("%f", &monto_credito);

    printf("Ingrese el tiempo en anos: ");
    scanf("%d", &tiempo_anios);

    printf("Ingrese el porcentaje de interes: ");
    scanf("%f", &interes_anual);

    for (i = 1; i <= tiempo_anios; i++) {
        if (i == 1) {
            total_anual = 2000 * (1 + (interes_anual / 100));
            pago_mensual = total_anual / 12;
        } else {
            total_anual = total_anual - 300;
            pago_mensual = total_anual / 12;
        }
        total_pagar += total_anual;
        printf("Total a pagar en el ano %d: %.2f\n", i, total_anual);
        printf("Pago mensual en el ano %d: %.2f\n", i, pago_mensual);
        monto_credito = monto_credito - (total_anual / tiempo_anios);
    }

    printf("Total a pagar en %d anos: %.2f\n", tiempo_anios, total_pagar);

    return 0;
}
