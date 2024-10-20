#include <stdio.h>

int main(void)
{
    int numinserito;
    printf("Inserisci un numero intero: ");
    scanf("%d", &numinserito);

    for (int i = 2; i < numinserito; i++){
        if (numinserito % i == 0)
        {
            printf("%d non è primo.\n", numinserito);
        }
        else
        {
            printf("%d è primo.\n", numinserito);
            break;
        }
    }
}
