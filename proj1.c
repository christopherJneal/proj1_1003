#include <stdio.h>
#define strln 128

int main()
{
    char message[strln], x;    //array of data type=char, name=message,size=128 bytes
    int key = 4, index;
    printf( "Enter message to decrypt: " ); //message to be encrypted
    scanf(" %[^\n]s", message );               //stores message in array
                                            //data encryption key
                                            //stores integer in adress assigned for key (pointer?)
    
    //for loop runs till message has been totally encrypted == till reaches NULL point
    for( index = 0; index != strln; index++ ){
        x = message[index];             //assigs each index number a datype from array message[]
        if( x >= 'a' && x <= 'z' ){     //if contidion is between ASCII number 'a'-'z' || 97-122  
            x = x - key;
            if( x < 'a' ){              //if the encrypted ASCII number lies outside boundary conditions 'a'-'z'
                x = x + 'z' - 'a' + 1;  //minuses 26 from encrypted number, should exclude from encryption?
            }
            message[index] = x;
        }
        else if( x >= 'A' && x <= 'Z' ){     //if contidion is between ASCII number 'a'-'z' || 65-90
            x = x - key;
            if( x < 'A' ){                   //if the encrypted ASCII number lies outside boundary conditions 'a'-'z'
                x = x + 'Z' - 'A' + 1;
            }
            message[index] = x;
        }
        else if( x = '\0'){
            break;
        }
    }
    printf("%s\n", message);
    return 0; 
}