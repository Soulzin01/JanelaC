#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

void inicializar_tela();
void janela(int xInicial, int yInicial, int xFinal, int yFinal, char titulo[20], int tipoMold);
void label(int lin, int col, char texto[24]);
void ler_string(char *texto, int lin, int col);
void ler_inteiro(int *inteiro, int lin, int col);
void ler_decimal(char *decimal, int lin, int col);
void gotoxy(int x, int y);

#endif