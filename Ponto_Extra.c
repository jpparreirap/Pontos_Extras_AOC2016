#include<stdio.h>
#include<stdlib.h>
#define TAM 100

int main(){
    char *vet;
    char str[TAM];

    vet = (char*)malloc(TAM*sizeof(char));
    int cont=0, i=0;

    printf("Digite a String desejada: ");
    scanf("%s", str);

    FILE *arquivostring;
    arquivostring = fopen("String.txt", "w"); //abre o arquivo de texto pra gravar

    fprintf (arquivostring, "%s", str);// saida do arquivo

    fclose(arquivostring);//fecha o arquivo

    arquivostring = fopen("String.txt", "r");
    if(i<=TAM && TAM>0){
        while (fscanf(arquivostring, "%c", &vet[i]) != EOF){
            cont++;
            i++;
        }
    }
    fclose(arquivostring);

    if(i<=TAM && TAM>0){
        for (i = 0; i < cont; i++){
            printf("%c: %d\n\n", vet[i], vet[i]);
        }
    }
    else
        printf("\n\nTamanho de string excedido\n\n");

    free(vet);
}
