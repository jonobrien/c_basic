#include <stdio.h>

#include <stdlib.h>

void main() {
  /* 
   * initialize an int 'a' with value 1, a pointer 'b' we assign 
   * the value at the address of the int 'a' 
  */
  printf("initializing misc.\n");
  int a = 1;
  int* b;
  b = &a;
  printf("a: %d\n", a);
  printf("value at address a assigned to b: %d\n", *b);
  printf("b pointer addr: %p\n", b);
  printf("a addr located: %p\n", &a);
  
  
  

}

