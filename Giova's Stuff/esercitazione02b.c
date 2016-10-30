
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define PI 3.14

int main(){

  double nA, nB, critico, radianti_ingresso, gradi_ingresso, gradi_uscita;
  double nMax, nMin;
  char mezzi[3];

  srand48(time(0));

  gradi_ingresso = ((double)lrand48()/RAND_MAX) * 90;
  radianti_ingresso = (PI * gradi_ingresso)/180;

  /*printf("%d\n\n", gradi_ingresso);*/

  printf("Inserire indice di rifrazione del mezzo A: ");
  scanf("%lf", &nA);

  printf("Inserire indice di rifrazione del mezzo B: ");
  scanf("%lf", &nB);

  nMax = (nA > nB) ? nA : nB;
  nMin = (nA > nB) ? nB : nA;

  mezzi[0] = (nA > nB) ? 'A' : 'B';
  mezzi[1] = (nA > nB) ? 'B' : 'A';

  critico = (asin(nMin/nMax) * 180)/(PI);
  gradi_uscita = (asin((nMax * sin(radianti_ingresso)) / nMin) * 180) / (PI);
  printf("Esiste angolo critico di %.2f gradi nel passaggio da %c a %c\n", critico, mezzi[0], mezzi[1]);
  if(gradi_ingresso > critico){
    printf("L'angolo d'ingresso di %.2f gradi e' maggiore dell'angolo critico!\n", gradi_ingresso);
  }
  else printf("Un raggio entrante a %.2f gradi esce a %.2f gradi\n", gradi_ingresso, gradi_uscita);

  return 0;
}
