#include <stdio.h>
#include <string.h>

int main(void)
{
    char lover[1000];
    printf("lover: ");
    fgets(lover, 1000, stdin);

    int letters = 0;
    int letters1 = 0;

    for (int i = 0; lover[i] != '\0'; i++)
    {
        if (lover[i] >= 'a' && lover[i] <= 'z')
        {
            letters++;
        }
        else if (lover[i] >= 'A' && lover[i] <= 'Z')
        {
            letters1++;
        }
    }

    printf("Letters: %d\n", letters);
    printf("Letters: %d\n", letters1);
}