#include <stdio.h>
#include <string.h>
int main()
{
    char test[20];

    scanf("%s", test);
    printf("%s\n", test);
    for(int i = 0; i <= (int)strlen(test)-1; i++){
        printf("%d",(int)strlen(test));
        printf("%c\n", test[i]);
    }
    return 0;
}
