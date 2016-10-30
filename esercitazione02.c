
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

  /*Dichiarazione variabili*/

  double S1, S2, M, F;

  /*Diamo all'utente informazioni sul programma*/

  printf( "\n-> LENTI E IMMAGINI\n\n"
          "Data la lunghezza focale della lente e la distanza\n"
          "dell'oggetto dalla lente, calcola i parametri\n"
          "fondamentali dell'immagine dell'oggetto\n\n");

  /*Chiede i dati all'utente*/

  printf("LUNGHEZZA FOCALE (metri): ");
  scanf("%lf", &F);

  printf("DISTANZA OGGETTO (metri): ");
  scanf("%lf", &S1);

  /*Calcoliamo S2 e M*/

  S2 = (F * S1)/(S1-F);
  M = -(S2 / S1);

  /*Stampiamo i parametri dell'immagine*/

  printf( "\nLa lente ha focale di %.2lf mt\n"
          "L'oggetto dista %.2f mt dalla lente\n"
          "L'immagine dista %.2f mt dalla lente\n"
          "Il fattore di ingrandimento e' %.2f\n", F, S1, S2, M);

  /*Diamo informazioni relative all'immagine*/

  if(S1 > F){
    printf("L'immagine e' reale\n");
  }
  else printf("L'immagine e' virtuale\n");

  if(M > 0){
    printf("L'immagine dritta\n");
  }
  else printf("L'immagine e' capovolta\n");

  if(fabs(M) > 1){
    printf("L'immagine e' ingrandita\n");
  }
  else if(fabs(M) < 1){
    printf("L'immagine e' rimpicciolita\n");
  }
  else printf("L'immagine e' invariata\n");

  return 0;

}
