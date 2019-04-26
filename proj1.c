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
    char messInpt[80];
    char *inputPtr = messInpt;
    char inchar;
    int i;

    inputFile = fopen("code.txt", "r");

    //check file
    if (inputFile == '\0'){ 
        printf("Failed to open\n");
        return 0;
    }
    else{
        //inputFile is valid so I read a string
        //and store it in inputBuffer
        fgets(messInpt, 80, inputFile);

        //pass every character of inputBuffer to encrypt()
        for(i=0; i < strlen(messInpt); i++){
            //printf("%c", inputBuffer[i]);
            inchar = messInpt[i];
            if( isalpha(inchar) && islower(inchar) ){
                encrypt(messInpt[i]);
            }
            else if( isalpha(inchar) && isupper(inchar) ){
                encrypt(messInpt[i]);
            }
            else{
                void;
            }
        }

    }
    //printf("\n\n");
    return 0;
}
