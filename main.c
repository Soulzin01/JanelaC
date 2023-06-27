#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "biblioteca.h"


int main()
{
    char nome[26], peso[5]; 
    int idade;
    extern int valorY;
    inicializar_tela();

    label(2, 2, "Nome: ");
    label(2, 3, "Idade: ");
    label(2, 4, "Peso: ");

    ler_string(nome, 7, 2);
    ler_inteiro(&idade, 8, 3);
    ler_decimal(peso, 7, 4);
    gotoxy(1, valorY+2);
    printf("Resultado:");
    gotoxy(1, valorY+3);
    printf("Nome: %s | Idade: %d Anos | Peso: %s Kg", nome, idade, peso);
    
    
    return 0;
}