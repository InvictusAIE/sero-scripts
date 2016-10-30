#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main() {

  int random_number;
  srand48(time(0));

  printf("%i\n", (int) time(0));

  while (1){
    random_number = (int) lrand48() % 5;
    printf("%i\n", random_number);
  }

  return 0;
}
