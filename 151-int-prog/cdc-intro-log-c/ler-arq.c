#include <stdio.h>
#include <stdlib.h>

int main(void) {
  FILE *pont_arquivo;
  char texto_str[20];

  pont_arquivo = fopen("palavras.txt", "r");

  while(fgets(texto_str, 20, pont_arquivo) != NULL) {
    printf("%s", texto_str);
  }
  
  fclose(pont_arquivo);

  return (0);

}
