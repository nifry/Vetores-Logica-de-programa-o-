#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int tamanho = 15;
    int numeros[tamanho];
    int i;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite o %d� n�mero:", i + 1);
        scanf("%d", &numeros[i]);
    }

system("cls");

    printf("Exibindo os n�meros digitados..... \n");

    for (i = 0; i < tamanho; i++)
        
    {
        printf("%d� n�meros: %d \n", i + 1, numeros[i]);
    }

    return 0;
}