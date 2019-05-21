#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0;
    int valores[9]; char temp = 'c';

    do
    {
        scanf("%d%c", &valores[i], &temp);
        i++;
    }
    while (temp  != '\n');

    for(i=0;i<9;i++)
        printf("%d ", valores[i]);

return 0;
}
