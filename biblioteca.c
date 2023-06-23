#include <stdio.h>

void janela(int xInicial, int yInicial, int xFinal, int yFinal){
    for(int i = 1; i <= xInicial; i++){
        for(int j = 1; j <= yInicial; j++){
            printf("-");
        }
    }
}
