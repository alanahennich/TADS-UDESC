// Crie um struct.
// A struct deve ter pelo menos um campo do tipo int, float, string e outra struct pre-definida.
// Crie uma função para inserir um vetor do tipo da struct definida.
// Crie uma função para mostrar um vetor do tipo da struct definida.
// Para isso, crie uma bilbioteca.

#include <stdio.h>

typedef struct
{
    char tipo[30];
    char fraqueza[30];
}Tipo;

typedef struct
{
    char nome[30];
    int nivel;
    float hp;
    Tipo tipo;
}Pokemon;

void inserirPokemons(Pokemon pokemons[], int quantidade)
{
    int i;

    for (i = 0; i < quantidade; i++)
    {
        printf("\n========== POKEMON %d ==========\n", i + 1);

        printf("Nome: ");
        scanf(" %29[^\n]", pokemons[i].nome);

        printf("Nivel: ");
        scanf("%d", &pokemons[i].nivel);

        printf("HP: ");
        scanf("%f", &pokemons[i].hp);

        printf("Tipo: ");
        scanf(" %29[^\n]", pokemons[i].tipo.tipo);

        printf("Fraqueza: ");
        scanf(" %29[^\n]", pokemons[i].tipo.fraqueza);
    }
}

void mostrarPokemons(Pokemon pokemons[], int quantidade)
{
    int i;

    printf("\n\n========== POKEMONS CADASTRADOS ==========\n");

    for (i = 0; i < quantidade; i++)
    {
        printf("\nPokemon %d\n", i + 1);
        printf("Nome: %s\n", pokemons[i].nome);
        printf("Nivel: %d\n", pokemons[i].nivel);
        printf("HP: %.1f\n", pokemons[i].hp);
        printf("Tipo: %s\n", pokemons[i].tipo.tipo);
        printf("Fraqueza: %s\n", pokemons[i].tipo.fraqueza);
    }
}

int main()
{
    int quantidade;

    printf("Quantos Pokemons deseja cadastrar? ");
    scanf("%d", &quantidade);

    Pokemon pokemons[quantidade];

    inserirPokemons(pokemons, quantidade);

    mostrarPokemons(pokemons, quantidade);

    return 0;
}
