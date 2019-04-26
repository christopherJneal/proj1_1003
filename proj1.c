#include <stdio.h>
#include <string.h>
#include <ctype.h>

void encrypt(char inchar){
    //Changing chars
    inchar = inchar + 6; //This is a simple substution
    //print encrypted char
    printf("%c",inchar);
}


int main(int argc, char* argv[]){
    FILE *inputFile;
    char mes_Inpt[80];
    char *inputPtr = mes_Inpt;
    char inchar;
    int i;

    inputFile = fopen("mes_encrpt", "r");

    //check file
    if (inputFile == '\0'){ 
        printf("Failed to open\n");
        return 0;
    }
    else{
        //inputFile is valid so I read a string
        //and store it in inputBuffer
        fgets(mes_Inpt, 80, inputFile);

        //pass every character of inputBuffer to encrypt()
        for(i=0; i < strlen(mes_Inpt); i++){
            //printf("%c", inputBuffer[i]);
            inchar = mes_Inpt[i];
            if( isalpha(inchar) && islower(inchar) ){
                encrypt(mes_Inpt[i]);
            }
            else if( isalpha(inchar) && isupper(inchar) ){
                encrypt(mes_Inpt[i]);
            }
            else{
                void;
            }
        }

    }
    //printf("\n\n");
    return 0;
}
