#include "biblioteca.h"
#include <stdio.h>

void janela(int xInicial, int yInicial, int xFinal, int yFinal){
    for(int i = xInicial; i <= xFinal; i++){
        for(int j = yInicial; j <= yFinal; j++){
            printf("-");
        }
    }
}
