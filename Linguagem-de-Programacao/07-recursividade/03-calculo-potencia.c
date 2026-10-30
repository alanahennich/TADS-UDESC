// 3. Escreva uma função recursiva que calcule x^n, onde x é a base e n o expoente inteiro não-negativo.

int potencia(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    else
    {
        return x * potencia(x, n - 1);
    }

    return 0;
}