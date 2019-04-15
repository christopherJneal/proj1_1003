#include <stdio.h>

int main(void){
    int frstChc, scndChc1, scndChc2;
    printf("Hello welcome to the cipher.\n");
    printf("Select from following menu.\n");
    printf("----------------------\n");
    printf("|(1) For encryption. |\n");
    printf("|(2) For decryption. |\n");
    printf("----------------------\n");
    scanf("%d", &frstChc);
    switch(frstChc){
        case 1: frstChc == 1;
            printf("Encryption was selected.\n");
            printf("Select from following two encryption ciphers:\n");
            printf("--------------------------\n");
            printf("|(1) Rotation cipher.    |\n");
            printf("|(2) Subsitution cipher. |\n");
            printf("--------------------------\n");
            scanf("%d", &scndChc);
            switch(scndChc1){
                case 1: scndChc1 == 1;
                    printf("Encryption using the rotation cipher was selected\n");
                    /*
                     * do some stuff to open and use rotation cipher and print to different file.
                     */
                    return 0;
                case 2: scndChc1 == 2;
                    printf("Encryption using the substitution cipher was selected\n");
                    /*
                     * do some stuff to open and use substitution cipher and print to different file
                     */
                    return 0;
                default:
                    printf("Input caused an error, select from given options!\nTry again.\n");
                    return 0;
            }
        case 2: frstChc == 2;
            printf("Decryption was selected.\n");
            printf("Select from following two decryption ciphers:\n");
            printf("--------------------------\n");
            printf("|(1) Rotation cipher.    |\n");
            printf("|(2) Subsitution cipher. |\n");
            printf("--------------------------\n");
            scanf("%d", scndChc2);
            switch(scndChc2){
                case 1: scndChc2 == 1;
                    printf("Decryption using the rotation cipher was selected\n");
                    /*
                     * do some stuff to open and use rotation cipher and print to different file.
                     */
                    return 0;
                case 2: scndChc2 == 2;
                    printf("Decryption using the substitution cipher was selected\n");
                    /*
                     * do some stuff to open and use substitution cipher and print to different file
                     */
                    return 0;
                default:
                    printf("Input caused an error, select from given options!\nTry again.\n");
                    return 0;
            }
            
        default:
            printf("Input caused an error, select from given options!\nTry again.\n");

    }
}