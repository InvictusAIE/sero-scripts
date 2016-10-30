#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){

  int serie[100], numero_max, i;

  scanf("%d", &numero_max);

  for (i = 0; i < numero_max; i++){
    printf("%d\n", i + 1);
  }

  return 0;
}
