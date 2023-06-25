#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

void janela(int xInicial, int yInicial, int xFinal, int yFinal, char titulo[20], int tipoMold);
void label(int lin, int col, char texto[24]);
char ler_string(int lin, int col, int tamanho);
void gotoxy(int x, int y);

#endif