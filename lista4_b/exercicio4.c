#include <stdio.h>

int main (void) {
  double total, totalDesc;
  int comprador;

  printf("Insira o valor total da compra: ");
  scanf("%lf", &total);

  printf("Insira o codigo do tipo de comprador: ");
  scanf("%d", &comprador);

  switch(comprador) {
    case 1:
      totalDesc = total;
      printf("Total a pagar: %.2lf reais", totalDesc);
      break;

    case 2:
      totalDesc = total * 0.9;
      printf("Total a pagar: %.2lf reais", totalDesc);
      break;

    case 3:
      totalDesc = total * 0.95;
      printf("Total a pagar: %.2lf reais", totalDesc);
      break;

    default:
      break;

    }
}