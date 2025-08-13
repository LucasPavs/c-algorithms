#include <stdio.h>
#include <ctype.h>

int main(){
    char caractere;

    printf("Informe o caractere: ");
    scanf(" %[^\n]", &caractere);
    
    if(caractere >= 'A' && caractere <= 'Z' || caractere >= 'a' && caractere <= 'z'){
        if(!(caractere >= 'A' && caractere <= 'Z')){
        caractere = toupper(caractere);
    }
        if(caractere == 'A'){
            printf("Vogal.\n\n");
    }
        else if( caractere == 'E'){
            printf("Vogal.\n\n");
    }
        else if( caractere == 'I'){
            printf("Vogal.\n\n");
    }
        else if( caractere == 'O'){
            printf("Vogal.\n\n");
    }
        else if( caractere == 'U'){
            printf("Vogal.\n\n");
    }
        else{
            printf("Consoante.\n\n");
    }
    }
    else{
        printf("Caractere invalido.\n\n");
    }

    return 0;
}