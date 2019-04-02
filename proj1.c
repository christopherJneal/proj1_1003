#include <stdio.h>


int main()
{
    char message[128], x;    //array of data type=char, name=message,size=128 bytes
    int key = 4, index;
    printf( "Enter message to encrypt: " ); //message to be encrypted
    scanf( "%c\n", message );               //stores message in array
    /*printf( "Enter encryption key: " );      //data encryption key
    scanf( "%d\n", &key ); */                 //stores integer in adress assigned for key (pointer?)
    
    
    //for loop runs till message has been totally encrypted == till reaches NULL point
    for( index = 0; message[index] != '\0'; index++ ){
        x = message[index];             //assigs each index number a datype from array message[]
        if( x >= 'a' && x <= 'z' ){     //if contidion is between ASCII number 'a'-'z' || 97-122  
            x = x + key;
            if( x > 'z' ){              //if the encrypted ASCII number lies outside boundary conditions 'a'-'z'
                x = x - 'z' + 'a' - 1;  //minuses 26 from encrypted number, should exclude from encryption?
            }
            message[index] = x;
            //printf("%c\n", message[index]);
        }
        else if( x >= 'A' && x <= 'Z' ){     //if contidion is between ASCII number 'a'-'z' || 65-90
            x = x + key;
            if( x > 'Z' ){                   //if the encrypted ASCII number lies outside boundary conditions 'a'-'z'
                x = x -'Z' + 'A' - 1;
            }
            message[index] = x;
            //printf("%c\n", message[index]);
        }
        printf("%c\n", message[index]);
        return 0;    
    }
}