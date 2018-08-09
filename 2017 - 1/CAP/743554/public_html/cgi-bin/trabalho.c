#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {

  char* pData = NULL;
  char response[512] = {'\n'};
  int x;
 //char rodapeImg[512] = "\n";
// strcpy(rodapeImg, "<img src=\"../ibagem.jpg\" alt=\"Computer Man\" style=\"width:128px; height:128px;\">");
  pData = getenv("QUERY_STRING");
  if (pData == NULL) {

    snprintf(response, sizeof response, "Error parsing the data.\n");
  } else if (sscanf(pData,
                    "x=%d",
                    &x) != 1) {

    snprintf(response, sizeof response, "Isso ai nao eh numero valido nao.\n");
  } else  if(x>5){

    snprintf(response, sizeof response, "Nossa, voces estao muito apaixonados!! :O \n");
  }
	else{ snprintf(response, sizeof response, "Hm... eh melhor rever algumas coisas...\n");

}


  printf("%s%c%c\n","Content-Type:text/html;charset=UTF-8",13,10);

  printf("<!DOCTYPE html>");

  printf("<html lang=\"en\">");

  printf("<head>");

  printf("<meta charset=\"utf-8\">");
  printf("<title>Calculadora do Amor</title>");

  printf("</head>");

  printf("<body>");

  printf("<!-- page content -->");
  printf("%s", response);
// printf("<img src=\"calclove.jpg"\ alt=\"HTML5 Icon\" width=/"128/" height=/"128/">");
//printf("%s", rodapeImg);

printf("<p> cade a imagem </p>");

  printf("</body>");

  printf("</html>");

  return 0;
}
