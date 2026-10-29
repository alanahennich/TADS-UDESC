/*7. Dados três valores X, Y e Z, verificar se eles podem ser os comprimentos dos lados
de um triângulo e, se forem verificar se é um triângulo equilátero, isósceles ou
escaleno. Se eles não formarem um triângulo, escrever a mensagem. Considere as
seguintes propriedades:
    • Equiláteros: tem os comprimentos dos três lados iguais;
    • Isósceles: tem os comprimentos de dois lados iguais;
    • Escalenos: tem os comprimentos dos três lados diferentes.
*/

#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Digite os três lados do triângulo:\n");
    scanf("%d %d %d", &x, &y, &z);

    if (((x + y) > z) && ((x + z) > y) && ((y + z) > x))
    {
        if ((x == y) && (y == z))
        {
            printf("Equilátero\n");
        }
        else if ((x != y) && (y != z) && (x != z))
        {
            printf("Escaleno\n");
        }
        else
        {
            printf("Isósceles\n");
        }
    }
    else
    {
        printf("Não forma um triângulo\n");
    }

    return 0;
}
