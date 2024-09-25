#include<stdio.h>

int main() {
    char nome;
    char sesso;
    printf("nome:");
    scanf("%c",&nome);
    printf("sesso(M o F): ");
    scanf("%c",&sesso);
    if(sesso=='M') {
        printf("Egregio signor %c\n",nome);
    }else {
        printf("Gentilissima signora %c\n",nome);
    }
    return 0;
}