#include <stdio.h>
#include <stdlib.h>
#include <string.h>




typedef  struct 
{
  float media;
  char nome[34];
}Aluno;

void inserir_dados(Aluno* aluno)
{
  float x;
  printf("\ninsira a media\n");
  scanf("%f",&aluno->media);
  
  printf("\n digite o nome\n");
  scanf("%s",aluno->nome);

}



int main(void) {

  Aluno aluno1;
  inserir_dados(&aluno1);
  printf("media : %.2f nome : %s",aluno1.media,aluno1.nome);

  return 0;
}
