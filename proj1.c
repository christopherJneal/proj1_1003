#include <stdio.h>
#include <string.h>

char *encryption(char[]);
void *decryption(char[]);
char alpha[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char key[26];

void main(){    
    /*
     * This section of code reads from the user's input and stores the message as a string
     */
    int choice, flag = 0, x, select_1, select_2;
    char *cipher_text, message[255];
    int key_rot = 4, index;
    printf("Enter plain text: ");
    scanf("%[^\n]", message);
    printf("Your plain text message is: %s\n", message); //prints the input from user
    
    printf("Select from following two ciphers:\n");
    printf("--------------------------\n");
    printf("|(1) Rotation cipher.    |\n");
    printf("|(2) Subsitution cipher. |\n");
    printf("--------------------------\n");
    scanf("%d", &select_1);
                
        if( select_1 == 1 ){
            do{
                printf("Select from following menu.\n");
                printf("----------------------\n");
                printf("|(1) For encryption. |\n");
                printf("|(2) For decryption. |\n");
                printf("|(0) To exit program.|\n");
                printf("----------------------\n");
                scanf("%d", &select_2);
                
                switch( select_2 ){
                case 1:
                //for loop runs till message has been totally encrypted == till reaches NULL point
                for( index = 0; index != 255; index++ ){
                    x = message[index];             //assigs each index number a datype from array message[]
                    if( x >= 'a' && x <= 'z' ){     //if contidion is between ASCII number 'a'-'z' || 97-122  
                        x = x + key_rot;
                        if( x > 'z' ){              //if the encrypted ASCII number lies outside boundary conditions 'a'-'z'
                            x = x - 'z' + 'a' - 1;  //subtracts 26 from encrypted number, should exclude from encryption
                        }
                        message[index] = x;
                    }
                    else if( x >= 'A' && x <= 'Z' ){     //if contidion is between ASCII number 'a'-'z' || 65-90
                        x = x + key_rot;
                        if( x > 'Z' ){                   //if the encrypted ASCII number lies outside boundary conditions 'a'-'z'
                            x = x -'Z' + 'A' - 1;
                        }
                        message[index] = x;
                    }
                    else if( x = '\0'){
                        break;
                    }
                }
                printf("%s\n", message); //prints encrypted message
                break;
                
                case 2:
                //for loop runs till message has been totally decrypted == till reaches NULL point
                for( index = 0; index != 255; index++ ){
                    x = message[index];             //assigs each index number a datype from array message[]
                    if( x >= 'a' && x <= 'z' ){     //if contidion is between ASCII number 'a'-'z' || 97-122  
                        x = x - key_rot;
                        if( x < 'a' ){              //if the encrypted ASCII number lies outside boundary conditions 'a'-'z'
                            x = x + 'z' - 'a' + 1;  //adds 26 from encrypted number, should exclude from encryption
                        }
                        message[index] = x;
                    }
                    else if( x >= 'A' && x <= 'Z' ){     //if contidion is between ASCII number 'a'-'z' || 65-90
                        x = x - key_rot;
                        if( x < 'A' ){                   //if the encrypted ASCII number lies outside boundary conditions 'a'-'z'
                            x = x + 'Z' - 'A' + 1;
                        }
                        message[index] = x;
                    }
                    else if( x = '\0'){
                        break;
                    }
                }
                printf("%s\n", message); //prints decrypted message
                break;
                
                case 0:
                    break;
                
                default:
                    printf("Input caused an error, select from given options!\nTry again.\n");
                    return 0;
                }
            }while( select_2 != 0 );
        }



            else if( select_1 == 2 ){
            do{
                printf("Select from following menu.\n");
                printf("----------------------\n");
                printf("|(1) For encryption. |\n");
                printf("|(2) For decryption. |\n");
                printf("|(0) To exit program.|\n");
                printf("----------------------\n");
                scanf("%d", &choice);
                switch( choice ){
                    case 1: 
                        cipher_text = encryption(message); //executes the encryption function defined under this code block
                        flag = 1;
                        break;
                    case 2: 
                        if( flag == 1 ){
                            decryption(cipher_text); //executes the decryption function defined under this code block
                        }
                        else{
                            printf("First perform encryption process\n");
                            break;
                        }
                    case 0: 
                        break;
                    default:
                        printf("Please enetr valid choice\n");
                        break;
                    }
            }while( choice != 0 );
            }
            else{
                printf("Input caused an error, select from given options!\nTry again.\n");
                return 0;
            }
}


char *encryption(char cipher_text[]){
    int i, j;
    printf("Enter the unique key of 26 characters for encryption:\n");
    scanf("%s", key);
    printf("Character replaced\n");
    printf("abcdefghijklmnopqrstuvwxyz\n"); //displays the key matching the alphabet so that the user can visually see what letter is exchanged for what
    printf("||||||||||||||||||||||||||\n");
    printf("%s\n", key);
    for( i = 0; i < strlen(cipher_text); i++){ //executes for loop until end of of string is reached
        for( j = 0; j < 26; j++){
            if( alpha[j] == cipher_text[i] ){
                cipher_text[i] = key[j]; // exchanges letters from original alphabet for that of the unique key entered
                break;
            }
        }
    }
    printf("Your encrypted message is: %s\n", cipher_text);
    return cipher_text;
}
void *decryption(char cipher_text[]){
    int i, j;
    char cipher[255]; //message entered by user
    strcpy(cipher, cipher_text);
    printf("Decryption Process\n");
    for( i = 0; i < strlen(cipher); i++ ){ //executes for loop until end of of string is reached
        for( j = 0; j < 26; j++ ){
            if( cipher[i] == key [j] ){
                cipher[i] = alpha[j]; //exchanges the letters from the encryption key with the corect ones from alphabet
                break;
            }
        }
    }
    printf("Your decrypted message is: %s\n", cipher); //prints decrypted meessage to the screen
    return 0;
}
