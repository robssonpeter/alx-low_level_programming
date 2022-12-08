#include <stdio.h>
int main(void){
  char character = 'z';
  int age = 24;
  unsigned int tasks = 21; 
  long longer = 35l;
  float temp = 3.4f;
  printf("Size of a char: %d byte(s)\n", sizeof(character));
  printf("Size of an int: %d byte(s)\n", sizeof(age));
  printf("Size of a long int: %d byte(s)\n", sizeof(tasks));
  printf("Size of a long long: %d byte(s)\n", sizeof(longer));
  printf("Size of a float: %d byte(s)\n", sizeof(temp));
  return 0;
}
