#include <stdio.h>

int main() { 
    int opcao;
    double tem, resultado;

    printf("escolha a conversao:\n");
    printf("1 - celsius para conversao\n");
    printf("2 - fahrenheit para celsius\n");
    printf("opcao: ");
    scanf("d", &opcao);

    printf("digite a temperatura: ");
    scanf("%lf", &tem);

    switch(opcao) { 
        case 1:
            resultado = (tem * 9.0 / 5.0) + 32.0;
            printf("resultado: %.2lf fahrenheit\n", resultado);
            break;

         case 2:
            resultado = (tem - 32.0) * 5.0 / 9.0;
            printf("%.0f F corresponde a %.2f C\n", tem, resultado);
            break;

        default:
            printf("opcao invalida\n");

}
    return 0;

}