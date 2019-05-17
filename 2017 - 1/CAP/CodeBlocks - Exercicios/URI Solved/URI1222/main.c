#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main () {
int c, l, n,i;
float contChars, contLines, contPages;
char palavra[70];

while (scanf("%d %d %d", &n, &l, &c) != EOF) {

contChars = 0;
contLines = 1;
while (n--) {
  scanf("%s", palavra);

  if (contChars > 0)
    contChars++;

  contChars += strlen(palavra);

  if (contChars == c) {
    contChars = 0;
    if (n > 0)
      contLines++;
  }

  if (contChars > c) {
    contChars = strlen(palavra);
    contLines++;
  }
}

 contPages =  ceil(contLines/l);

printf("%d\n", (int)contPages);


}


return 0;
}
