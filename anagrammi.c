#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

int main(){

  char word[100], buffer[100], anagram[100];

  printf("Insert a word to shuffle: ");
  scanf("%s", word);

  strcpy(buffer, word);

  printf("%s", buffer);

  return 0;
}
