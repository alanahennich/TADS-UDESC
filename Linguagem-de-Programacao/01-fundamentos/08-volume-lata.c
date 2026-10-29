/* 8. (De Oliveira; Manzano, 2004) Desenvolva um programa que calcule o volume de
uma lata, a partir de seu raio e sua altura. Considere que o volume eh dado por:
volume = π × raio^2 × altura.
*/

#define _USE_MATH_DEFINES  // !! alguns compiladores precisam pra m_pi
#define RAIO 4.6
#define ALTURA 6.3  // usei o define já que o enunciado nao pede para solicitar os valores ao usuario
#include <stdio.h>
#include <math.h>  // pra usar funcao pow e m_pi

int main()
{
    float volume;

    volume = M_PI * pow(RAIO, 2) * ALTURA;

    printf("Raio definido: %.2f cm\n", RAIO); // usando cm como medida
    printf("Altura definida: %.2f cm\n", ALTURA);
    printf("Volume da lata: %.2f mL\n", volume);

    return 0;
}