#include <stdio.h>
#include <stdlib.h>

char *invertirCadena(char array[]);

int main(void) {

  char array[50] = {"Probando Invertir"};

  printf("Array invertido: %s", invertirCadena(array));

  return 0;
}

char *invertirCadena(char array[]) {
  int lengthArray = strlen(array);
  char bufferArray;
  for (int i = 0, j = lengthArray - 1; i < (lengthArray / 2); i++, j--) {
    bufferArray = array[i];
    array[i] = array[j];
    array[j] = bufferArray;
  }
  return array;
}
