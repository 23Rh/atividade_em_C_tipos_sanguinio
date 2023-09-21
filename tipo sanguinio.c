#include <stdio.h>

int tipodesangue;
int rh = 2;

int main(void) {

  printf("digite o tipo sanguinio do paciente:\n digite 1 para possitivo e 0 "
         "para negativo.\n");
  scanf("%d", &rh);

  if (rh == 1) {

    printf("digite seu tipo sanguinio:\n digite 1 para A+ , 2 para B+ , 3 para "
           "AB+ ou 4 para O+.\n");
    scanf("%d", &tipodesangue);

    if (tipodesangue == 1) {
      printf("paciente é do tipo A+ e pode receber de A+ , A-, O+ E O- ");
    } else if (tipodesangue == 2) {
      printf("paciente é do  tipo B e pode receber de B+, B-, O+ E O- .");
    } else if (tipodesangue == 3) {

      printf("paciente é do tipo AB, ele é compativel com todos os tipos.");
    } else if (tipodesangue == 4) {
      printf("paciente é do tipo O e pode receber de O+ e O- .");
    } else {
      printf("tipo sanguinio INVALIDO.");
    }

  } else if (rh == 0) {

    printf("digite seu tipo sanguinio:\n digite 1 para A- , 2 para B- , 3 para "
           "AB- ou 4 para O-.\n");
    scanf("%d", &tipodesangue);

    if (tipodesangue == 1) {
      printf("\no paciente é do tipo sanguineo A- e pode receber de A- e O-");
    } else if (tipodesangue == 2) {
      printf("paciente é do  tipo B- e pode receber de  B- E O- .");
    } else if (tipodesangue == 3) {
      printf("paciente é do tipo AB-, ele é compativel com todos os tipos     "

             "negativos .");
    } else if (tipodesangue == 4) {
      printf("paciente é do tipo O- e pode receber O- .");
    } else {
      printf("tipo sanguinio INVALIDO.");
    }
  }
  return 0;
}