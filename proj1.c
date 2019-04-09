#include <stdio.h>

int main(void){
    int frstChc, k;
    printf("Hello welcome to the cipher.\n");
    printf("Select from following menu.\n");
    printf("----------------------\n");
    printf("|(1) For encryption. |\n");
    printf("|(2) For decryption. |\n");
    printf("----------------------\n");
    scanf("%d", &frstChc);
    if(frstChc == 1){
        printf("Encryption was selected.\n");
        printf("Select from following two encryption ciphers:\n");
        printf("--------------------------\n");
        printf("|(1) Rotation cipher.    |\n");
        printf("|(2) Subsitution cipher. |\n");
        printf("--------------------------\n");
        if(scndChc == 1){
            
        }
        else if(scndChc == 2){
            
        }
        else{
            
        }
    }
    else if(frstChc == 2){
        printf("Decryption was selected.\n");
    }
    else{
        printf("Input caused an error, select from given options!\nTry again.\n");
    }
   
}