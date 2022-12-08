#include <stdio.h>
int main(){
  char character = 'z';
  int age = 24;
  unsigned int tasks = 21; 
  long longer = 35l;
  float temp = 3.4f;
  printf("Size of a char: %d byte(s)\n", character);
  printf("Size of an int: %d byte(s)\n", age);
  printf("Size of a long int: %d byte(s)\n", tasks);
  printf("Size of a long long: %d byte(s)\n", longer);
  printf("Size of a float: %d byte(s)\n", temp);
  return 0;
}
