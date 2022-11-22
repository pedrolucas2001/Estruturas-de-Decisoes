#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1,nota2,nota3,nota4,media;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    printf("Digite a terceira nota: ");
    scanf("%f",&nota3);
    printf("Digite a quarta nota: ");
    scanf("%f",&nota4);

    media =(nota1+nota2+nota3+nota4)/4;

   if (media>=6)
        printf("A media foi %.2f , Aluno aprovado",media);
    else
        printf("A media foi %.2f, aluno reprovado", media);

    return 0;
}
