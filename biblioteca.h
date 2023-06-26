#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

void inicializar_tela();
void janela(int xInicial, int yInicial, int xFinal, int yFinal, char titulo[20], int tipoMold);
void label(int lin, int col, char texto[24]);
char ler_string(int lin, int col, int tamanho);
int ler_inteiro(int lin, int col, int tamanho);
float ler_decimal(int lin, int col, int tamanho);
void gotoxy(int x, int y);

#endif