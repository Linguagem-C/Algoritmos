#include <stdio.h>
#include <string.h>

/* remove a quebra de linha da função fgets() e atualiza o tamanho */
void remover_quebra_de_linha(char *string) {
    
    size_t tamanho;

    tamanho = strlen(string);

    if (string[tamanho - 1] == '\n'){
        string[--tamanho] = 0;
    }
}

void procuraString(char* string1, char* string2){
        int length = strlen(string2);
        char *ptr;
        int i;
        char copy[100];                             /* vector auxiliar para comparar*/
       
        for(i = 0; i<length; i++){
            ptr=strchr(string1,string2[i]);         /* obtem a primeira ocorrencia do primeiro caracter da string2 na string1 */
            copy[i]= *ptr;                          /* coloca-se no primeiro caracter de copy o caracter apontado por ptr*/
        }
        copy[length] = '\0';                        /* colocar o caracter fim de string no array copy*/
        if(!strcmp(copy,string2)){
            printf("String found = %s\n",copy);
        }else{ 
            printf("String not found\n");
        }
}

int main() {

    char str1[50] = "atireip o pau no gato, mais o gato não morreu";
    char str2[20];
    
    printf("Inseri a string que deseja procurar: ");
    fgets(str2, 20, stdin);
    remover_quebra_de_linha(str2);

    procuraString(str1, str2);


    return 0;
}
