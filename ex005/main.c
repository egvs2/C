#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;


    printf("Digite um número: ");
    scanf("%d",&num);

    int ant = num - 1;
    int suce = num + 1;

    printf("O antecessor de %d é %d e o seu sucessor é %d",num, ant, suce);
    return 0;
}
