#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int rectangulo(float base, float altura, float *dir_area, float *dir_peri);

int rectangulo(float base, float altura, float *dir_area, float *dir_peri) {
  if(base > 0 && altura > 0){
  *dir_peri = (2 * base) + (2 * altura);
  *dir_area = base * altura;
    return 1;
  }else if(base <= 0 || altura <=0){
    
	return 0;
  }
  return 0;
}

int main(int argc, char *argv[]) {
  float base, altura, area, peri;

  fprintf(stdout,"Dame la base: ");
  fscanf(stdin,"%f",&base);
  fprintf(stdout,"Dame la altura: ");
  fscanf(stdin,"%f",&altura);
    
  int resultado = rectangulo(base, altura, &area, &peri);

  if(resultado==0){

    fprintf(stdout,"Los valores deben ser mayores que 0.\n");

  }else if(resultado==1){

    fprintf(stdout,"\n Altura: %12.2f cm\n Base: %14.2f cm\n Area: %14.2f cm x cm\n Perimetro: %9.2f cm\n\n", altura, base, area, peri);
    
  }


  return 0;
    
}
