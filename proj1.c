#include <stdio.h>
#include <string.h>

char *encryption(char[]);
void *decryption(char[]);
char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char key[26];

void main(){
    int i, key, choice, flag = 0;
    char *cipher_text, message[255];
    printf("ENter plain text\n");
    scanf("%[^\n]", message);
    decryption(cipher_text);
    printf("Your plain text message is: %s\n", message);
    printf("Press 1 for encryption\n Press 2 for decryption\n Press 'o' for exit\n");
    scanf("%d", &choice);
    do{
        switch( choice ){
            case 1: 
                cipher_text = encryption(message);
                flag = 1;
                break;
            case 2: 
                if( flag == 1 ){
                    decryption(cipher_text);
                }
                else{
                    printf("First perform encryption process\n");
                    break;
                }
            case 0: 
                break;
            default:
                printf("Please enetr valif choice\n");
                break;
            }
    }while( choice != 0 )
    return 0;
}
    char *encryption(char cipher_text[]){
        int i, value, j;
        printf("Enter the unique key of 26 characters for encryption:\n");
        scanf("%s", key);
        printf("Character replaced\n");
        printf("abcdefghijklmnopqrstuvwxyz\n");
        printf("||||||||||||||||||||||||||\n");
        printf("%s\n", key);
        for( i = 0; i < strlen(cipher_text); i++){
            for( j = 0; j < 26; j++){
                if( alpha[j] == cipher_text[i] ){
                    cipher_text[i] = key[j];
                    break;
                }
            }
        }
    printf("Your encrypted message is: %s\n", cipher_text);
    return cipher_text;
    }
    void *decryption(char cipher_text[]){
        int i, value, j;
        char cipher[255];
        strcpy(cipher, cipher_text);
        printf("Decryption Process\n");
        for( i = 0; i < strlen(cipher); i++ ){
            for( j = 0; j < 26; j++ ){
                if( cipher[i] == key [j] ){
                    cipher[i] = alpha[j];
                    break;
                }
            }
        }
    printf("Decrypted Text %s", cipher_text);
    return 0;
    }
