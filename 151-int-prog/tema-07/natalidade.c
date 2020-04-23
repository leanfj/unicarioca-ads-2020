#include <stdio.h>

int main() {
  
  float hab_pais_a = 5000000, hab_pais_b = 7000000;
  float taxa_nat_a= 0.3, taxa_nat_b = 0.2;
  int contador_anos;
  while (hab_pais_a <= hab_pais_b) {
    hab_pais_a = hab_pais_a + (hab_pais_a * taxa_nat_a);
    hab_pais_b = hab_pais_b + (hab_pais_b * taxa_nat_b);
    contador_anos++;
  }

  printf("Em %d anos a população de A ultrapassou de B \n", contador_anos);
  printf("Populaçao de A %f \n", hab_pais_a);
  printf("Populaçao de B %f \n", hab_pais_b);
  return 0;
}
