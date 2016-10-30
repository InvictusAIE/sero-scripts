#include <stdlib.h>
#include <stdio.h>

/*inserisco funzione main()*/

int main()
{
  /*dichiaro le variabili*/
  double tc, tf, offset, conv;
  int scelta = 1;

  /*spiegazione del programma all`utente*/
  printf("Il programma converte temperature:\n");
  printf("1- da Celsius a Fahrenheit\n");
  printf("2- da Fahrenheit a Celsius\n");

  printf("Cosa vuoi convertire? [1-2] ");
  scanf("%d", &scelta);

  if(scelta == 1)
    {
      /*assegno il valore alle costanti*/
      offset = 32.;
      conv = 9./5.;

      /*richiesta della temperatura da convertire*/
      printf("Temperatura in gradi Celsius: ");
      scanf("%lf", &tc);

      /*CONVERSIONE*/
      tf = tc * conv + offset;

      /*stampiamo il valore convertito*/
      printf("%.2f gradi Celsius equivalgono a %.2f gradi Fahrenheit\n", tc, tf);
    }

  else if (scelta == 2)
    {
      /*assegno il valore alle costanti*/
      offset = 32.;
      conv = 5./9.;

      /*richiesta della temperatura da convertire*/
      printf("Temperatura in gradi Fahrenheit: ");
      scanf("%lf", &tf);

      /*CONVERSIONE*/
      tc = (tf - offset) * conv;

      /*stampiamo il valore convertito*/
      printf("%.2f gradi Fahrenheit equivalgono a %.2f gradi Celsius\n", tf, tc);
    }
  else
    {
      printf("Non ho capito\n");
    }

  exit(0);
}
