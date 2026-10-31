#include <stdio.h>

int main(void)
{
    char s[50];
    int tam = 0;

    printf("Palavra: ");
    scanf("%49s", s);

    while (s[tam] != '\0')
    {
        tam++;
    }

    for (int i = tam - 1; i >= 0; i--)
    {
        printf("%c", s[i]);
    }
    printf("\n");

    return 0;
}