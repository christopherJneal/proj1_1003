#include <stdio.h>

int main()
{
    FILE *input;
    input = fopen("mes_encrpt", "r");
    while(feof(input) == 0){
        char characterRead;
        fscanf(input, "%c", &characterRead);
        printf("%c", characterRead);
    }
}