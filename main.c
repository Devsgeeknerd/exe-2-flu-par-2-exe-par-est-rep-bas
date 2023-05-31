#include <stdio.h>
#include <stdlib.h>

void main()
{
    int numero1;
    int numero2;
    int divisao;

    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);

    if ((numero1 > 0) && (numero1 < numero2))
    {
        for (numero1; numero1 <= numero2; numero1++)
        {
            for (int i = 1; i <= numero1; i++)
            {
                if (numero1 % i == 0)
                {
                    divisao++;
                }
            }
            if (divisao == 2)
            {
                printf("O numero %d e primo.\n", numero1);
            }
            else
            {
                printf("O numero %d nao e primo.\n", numero1);
            }
            divisao = 0;
        }
    }
    else
    {
        printf("O primeiro numero menor que o segundo e maior que 0.");
    }
    return 0;
}
