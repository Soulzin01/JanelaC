#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "biblioteca.h"


int main()
{
    char nome[26], peso[5]; // Inicialização das variáveis que serão passadas nas funções de leitura
    int idade; // Inicialização das variáveis que serão passadas nas funções de leitura
    
    inicializar_tela(); //Inicialização da tela utilizando os parâmetros que foram recebidos

    label(2, 2, "Nome: ");
    label(2, 3, "Idade: ");
    label(2, 4, "Peso: ");

    ler_string(nome, 7, 2);
    ler_inteiro(&idade, 8, 3);
    ler_decimal(peso, 7, 4);
    gotoxy(2, 19);
    printf("Resultado:");
    gotoxy(2, 20);
    printf("Nome: %s | Idade: %d Anos | Peso: %s Kg", nome, idade, peso);
    
    
    return 0;
}